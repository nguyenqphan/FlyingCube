using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Spawner : MonoBehaviour {

	private bool isBlockShape = false;				//Move Cube Up when it is true;
	private bool isEmptyShape = false;				//EmptyShape() is is progress
	private bool isZigzag = false;					//Control the initial position. Make the distance bigger	
	private bool isMoveDown = false;				//Move Cube down when it is true
	private Transform spawnerTrans;

	public GameObject cube;

	private Cube cubeComponent;
	private Transform cubeTrans;

	private List<GameObject> cubeList;

	private List<Transform> cubeTransList;

	private List<Cube> cubeComponentList;



	private int cubeAmount;
	private int InitialCubeNum;
	private bool isFirst;

	private int xPos;
	private int yPos = 0;

	private float unit = 6f;
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

		cubeTransList = new List<Transform>();

		cubeComponentList = new List<Cube>();

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

		StartCoroutine(LayoutCube());
	}

	void Update()
	{
		if(Input.GetButtonDown("Fire1"))
		{
//			Debug.Log("Fire1");
//			StartCoroutine(LayoutCube());
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
				cubeTransList[i].position = new Vector3(xPos, YPosition(), 0f);
				cubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);

				cubeList[i].SetActive(true);

				if(isFirst)
				{
					if (!isMoveDown || !isEmptyShape) {
						cubeComponentList [i].StartMoveCube (ChooseShape());
//						Debug.Log("Move Up");

					}
					else{

						Debug.Log("Move Down");
						cubeComponentList [i].StartMoveDown (ChooseShape ());

					}
//					Debug.Log("First " + unit);
				}
				else{
					if (!isBlockShape || isEmptyShape ) {
						cubeComponentList [i].StartMoveDown (ChooseShape ());
					}
					else{
						cubeComponentList[i].StartMoveCube(ChooseShape());
					}
//					Debug.Log("Second " + unit);
				}
//				YPosition();
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
//			case 1:  return EmptyShape();
			case 1: return SquareShape();
			case 2: return BlockShape();
			case 3: return BlockShape2();
			case 4: return VShape();


			default: return EmptyShape();
		}
	}



	private float SquareShape(){
//		Debug.Log("Im in Square Shape");
//		isMoveDown = true;
//		isEmptyShape = true;
		isBlockShape = false;
		Debug.Log("Is Down " + isMoveDown);
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
//					shapeValue = 2;								//change the shape, exit this function
				}
			} else {
				unit = unit - 1f;
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (unit == 0) {
//				switchPlusMinus = !switchPlusMinus;
				shapeValue =0;								//change the shape, exit this function
//				isBlockShape = !isBlockShape;
//				isZigzag = !isZigzag;
//				isMoveDown = !isMoveDown;
//				isEmptyShape = false;
				isBlockShape = true;
			}
		}
		return unit;
	}

	private float VReverseShape(){
		//		Debug.Log("Im in Square Shape");
		//		isMoveDown = true;
		//		isEmptyShape = true;
		//		isBlockShape = false;
		isBlockShape = true;
		isZigzag = true;
		Debug.Log("Is Down " + isMoveDown);
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
					//					shapeValue = 2;								//change the shape, exit this function
				}
			} else {
				unit = unit - 1f;
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (unit == 0) {
				//				switchPlusMinus = !switchPlusMinus;
				shapeValue =0;								//change the shape, exit this function
				isBlockShape = !isBlockShape;
				isZigzag = !isZigzag;
				//				isMoveDown = !isMoveDown;
				//				isEmptyShape = false;
				//				isBlockShape = true;
			}
		}
		return unit;
	}

	private float VShape(){
		//		Debug.Log("Im in Square Shape");
		isMoveDown = true;
		isEmptyShape = true;
		isZigzag = true;
		//		isBlockShape = false;
		Debug.Log("Is Down " + isMoveDown);
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
					//					shapeValue = 2;								//change the shape, exit this function
				}
			} else {
				unit = unit - 1f;
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (unit == 0) {
				//				switchPlusMinus = !switchPlusMinus;
				shapeValue =0;								//change the shape, exit this function
				isBlockShape = !isBlockShape;
				isZigzag = !isZigzag;
				isMoveDown = !isMoveDown;
				isEmptyShape = false;
				//				isBlockShape = true;
			}
		}
		return unit;
	}

	private float PlayShape()
	{
//		Debug.Log("Im in PlayShape Shape");
		if(isFirst)
		{
			if(unit < 1)
			{
				unit = 7; 
				shapeValue = 0;
			}
			unit -= 1;
		}
		if(unit  < 0)
		{
			unit = 7; 
		}
		return unit;
	}


	private int numOfSpace = 0;
	private int maxSpace = 4;
	private int countShape = 0;
	private float EmptyShape()
	{
		isEmptyShape = true;
//		Debug.Log("I am in Empty Shape");
		if (isFirst) {
			numOfSpace++;

		}
		else{
			if (numOfSpace > maxSpace - 1) {
				isEmptyShape = false;
//				shapeValue = 3;
				countShape++;
				shapeValue = shapeValue + countShape;								//Change the shape
				if(shapeValue > 4){
					countShape = 0;
					shapeValue = 1;
				}
////
//				Debug.Log(shapeValue);

				unit = 1	;									//PlayShape() has to start at unit 7
				numOfSpace = 0;								//reset numOfSpace
			}
		}

//		Debug.Log("Number Of Space " + numOfSpace);

		return 6;
	}

	private float BlockShape()
	{
//			Debug.Log("Iam in BlockShape");
	
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
				tallSize = 4;
//				isBlockShape = false;	

			}	
		}

		return 5;
	}

	private float BlockShape2()
	{
		isEmptyShape = true;
		isBlockShape = false;
		isMoveDown = true;
//		Debug.Log("Im in BlockShape 2");
//		isBlockShape = true;
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
				isEmptyShape = false;
				isMoveDown = false;

			}	
		}

////		Debug.Log(isBlockShape + " IsBlockShape");
//		Debug.Log(isMoveDown + " IsMovingDown");
//		Debug.Log(isEmptyShape + " IsEmpty");
//		Debug.Log("-----------------------------------------");

		return 6;
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


	void FindCube()
	{
		
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
