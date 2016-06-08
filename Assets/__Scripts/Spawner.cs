using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Spawner : MonoBehaviour {

	private bool isBlockShape = false;				//Move Cube Up when it is true;
	private bool isEmptyShape = false;				//EmptyShape() is is progress
	private bool isZigzag = false;					//Control the initial position. Make the distance bigger	
	private bool isMoveDown = false;				//Move Cube down when it is true
	private bool isSpike = false;
	private float currShape;

	private Transform spawnerTrans;

	public GameObject cube;
	public GameObject smallCube;

	private Cube cubeComponent;
	private Cube smallCubeComponent;

	private Transform cubeTrans;
	private Transform smallCubeTrans;

	private List<GameObject> cubeList;
	private List<GameObject> smallCubeList;

	private List<Transform> cubeTransList;
	private List<Transform> smallCubeTransList;

	private List<Cube> cubeComponentList;
	private List<Cube> smallCubeComponentList;

	private int cubeAmount;
	private int InitialCubeNum;
	private bool isFirst;

	private int xPos;
	private int yPos = 0;

	private float unit = 0f;
	private bool switchPlusMinus = true;

	private int tallSize;

	private Vector3 currCubePos()
	{
		return new Vector3(xPos, yPos, 0);	
	}

	void Awake()
	{
		spawnerTrans = GetComponent<Transform>();
	}

	// Use this for initialization
	void Start () {
		cubeAmount = 40;
		InitialCubeNum = 32;
		isFirst = true;

		tallSize = 3;

		cubeList = new List<GameObject>();
		smallCubeList = new List<GameObject>();

		cubeTransList = new List<Transform>();
		smallCubeTransList = new List<Transform>();

		cubeComponentList = new List<Cube>();
		smallCubeComponentList = new List<Cube>();

		for(int i = 0; i < cubeAmount; i++)
		{
			GameObject newCube = Instantiate(cube, spawnerTrans.position, Quaternion.identity) as GameObject;

			newCube.transform.parent = spawnerTrans;

			newCube.SetActive(false);

			cubeList.Add(newCube);

			cubeTrans = newCube.GetComponent<Transform>();
			cubeTransList.Add(cubeTrans);

			cubeComponent = newCube.GetComponent<Cube>();
			cubeComponentList.Add(cubeComponent);

		}

		for(int i = 0; i < cubeAmount; i++)
		{
			GameObject newSmallCube = Instantiate(smallCube, spawnerTrans.position, Quaternion.identity) as GameObject;

			newSmallCube.transform.parent = spawnerTrans;

			newSmallCube.SetActive(false);

			smallCubeList.Add(newSmallCube);

			smallCubeTrans = newSmallCube.GetComponent<Transform>();
			smallCubeTransList.Add(smallCubeTrans);

			smallCubeComponent = newSmallCube.GetComponent<Cube>();
			smallCubeComponentList.Add(smallCubeComponent);
		}

		StartCoroutine(LayoutCube());
	}

	void Update()
	{
		if(Input.GetButtonDown("Fire1"))
		{
		}
	}

	public void StartSpawnCube()
	{
		StartCoroutine(SpawnCube());
	}

	private IEnumerator SpawnCube( )
	{
		for(int i = 0; i < cubeList.Count; i++)
		{
			if(!cubeList[i].activeInHierarchy)
			{
				currShape = ChooseShape();
				cubeTransList[i].position = new Vector3(xPos, YPosition(), 0f);
				cubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);

				cubeList[i].SetActive(true);
//				currShape = ChooseShape();
				if(isFirst)
				{
//					currShape = ChooseShape();
					if (!isMoveDown || isEmptyShape) {
						cubeComponentList [i].StartMoveCube (currShape);
					}
					else{
						cubeComponentList [i].StartMoveDown (currShape);

					}
				}
				else{
//					currShape = ChooseShape();
					if (!isBlockShape || isEmptyShape ) {
						cubeComponentList [i].StartMoveDown (currShape);
					}
					else{
						cubeComponentList[i].StartMoveCube(currShape);
					}
				}

				isFirst = !isFirst;
				if(isFirst){
					xPos++;
					GameManager.Instance.NumSpawnedCube += 2;
					break;
				}
			}
		}

		yield return 0;
	}

	private int shapeValue = 0;
	private float ChooseShape()
	{
		switch(shapeValue)
		{
		case 0:  return EmptyShape();
		case 1: return SquareShape();
		case 2: return BlockShape();
		case 3: return BlockShape2();
		case 4: return VShape();
		case 5: return Spike();
		case 6: return VReverseShape();
		case 7: return BlockShape();

		default: return EmptyShape();
		}
	}
		
	private int numOfSpace = 0;
	private int maxSpace = 4;
	private int countShape = 0;
	private float EmptyShape()
	{
		isEmptyShape = true;
		isZigzag = false;

		if (isFirst) {
			numOfSpace++;
		}
		else{
			if (numOfSpace > maxSpace) {

				countShape++;
				shapeValue = shapeValue + countShape;								//Change the shape
				if(shapeValue > 7){
					countShape = 1;
					shapeValue = 1;
				}

				numOfSpace = 0;								//reset numOfSpace
			}
		}

		return 6;
	}


	private float SquareShape(){
		isBlockShape = false;							//Make the bottom cubes go down
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
				}
			} else {
				unit = unit - 1f;
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (unit == 0) {
				shapeValue =0;								//change the shape, exit this function
			}
		}
		return unit;
	}

	private float VReverseShape(){
		isEmptyShape = false;
		isBlockShape = true;
		isMoveDown = false;
		isZigzag = true;
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
				}
			} else {
				unit = unit - 1f;
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (unit == 0) {
				shapeValue =0;								//change the shape, exit this function
//				isBlockShape = !isBlockShape;
//				isZigzag = !isZigzag;
			}
		}
		return unit;
	}

	private float VShape(){
		isMoveDown = true;
		isEmptyShape = false;
		isZigzag = true;
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
				}
			} else {
				unit = unit - 1f;
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (unit == 0) {
				shapeValue =0;								//change the shape, exit this function
			}
		}
		return unit;
	}
		


	private float BlockShape()
	{
		isMoveDown = false;
		isEmptyShape = false;
		isBlockShape = true;
		if(isFirst )
		{
			tallSize--;
			return 5f;
		}
		else
		{
			if(tallSize < 0)
			{
				shapeValue = 0;
				tallSize = 3;
			}	
		}

		return 5;
	}

	private float BlockShape2()
	{
		isEmptyShape = false;
		isBlockShape = false;
		isMoveDown = true;

		if(isFirst )
		{
			tallSize--;
			return 6f;
		}
		else
		{
			if(tallSize < 0)
			{
				shapeValue = 0;
				tallSize = 3;
			}	
		}



		return 6;
	}


	private int spikeSize  = 6;
	private float Spike()
	{
		isEmptyShape = false;
		isBlockShape = false;
		isMoveDown = true;
		isZigzag = true;

		if(isFirst )
		{
			spikeSize--;
			isSpike = !isSpike;
			if(isSpike)
				return 6f;
			else
				return 7f;
		}
		else
		{
			if(spikeSize < 0)
			{
				shapeValue = 0;
				spikeSize = 6;

			}	
		}

		if(isSpike)
			return 6f;
		else 
			return 7f;
	}
		


	IEnumerator LayoutCube()
	{
		for(int i = 0; i < InitialCubeNum; i += 2)
		{

			cubeTransList[i].position = new Vector3(xPos, yPos + 20f, 0f);
			cubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);

			cubeList[i].SetActive(true);

			cubeTransList[i + 1].position =  new Vector3(xPos, yPos - 20f, 0f);
			cubeTransList[i + 1].rotation = Quaternion.Euler(0f,0f,0f);

			cubeList[i + 1].SetActive(true);
			xPos++;
			yield return 0;
		}
	}

	private float YPosition()
	{

		if(isFirst)
		{
			if(isZigzag)
				return 13f;
			else
				return 12f;
		}
		else{
			if(isZigzag)
				return -13f;
			else
				return -12f;
		}
	}
}