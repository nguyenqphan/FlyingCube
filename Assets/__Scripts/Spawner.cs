using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Spawner : MonoBehaviour {

	private int CubeMatNum;
	private int currentColor;

	private bool isBlockShape = false;				//Move Cube Up when it is true;
	private bool isEmptyShape = false;				//EmptyShape() is is progress
	private bool isZigzag = false;					//Control the initial position. Make the distance bigger	
	private bool isMoveDown = false;				//Move Cube down when it is true
	private bool isSpike = false;					//Controle the spike shape
	private float currShape;						//Store the value of the current shape
	private float currLine;							//Store the value of the current line
	private bool isObstacle = false;				//if obstacle is on, create another the line in the mid

	private Transform spawnerTrans;					//reference to the Transform component
		
	public GameObject cube;							//reference to the Long Cube prefab
	public GameObject smallCube;					//reference to the small cube prefab
	public GameObject tinyCube;

	private Cube cubeComponent;						//reference to the Long Cube script
	private Cube smallCubeComponent;				//refernce to the small Cube script
	private Cube tinyCubeComponent;

	private CubeSkin cubeSkinComponent;
	private SmallCubeSkin smallCubeSkinComponent;
	private TinyCubeSkin tinyCubeSkinComponent;

	private Transform cubeTrans;					//reference to the transform of the long cube script
	private Transform smallCubeTrans;				//reference to the transform of the small cube script
	private Transform tinyCubeTrans;

	private List<GameObject> cubeList;				//Store long cubes in a list
	private List<GameObject> smallCubeList;			//Store small cubes in a list 
	private List<GameObject> tinyCubeList;

	private List<Transform> cubeTransList;			//Store transform components of long cubes in a list
	private List<Transform> smallCubeTransList;		//Store transform components of small cubes in a list
	private List<Transform> tinyCubeTransList;

	private List<Cube> cubeComponentList;			//Store the cube components of long cubes in a list
	private List<Cube> smallCubeComponentList;		//Store the cube components of small cubes in a list
	private List<Cube> tinyCubeComponentList;

	private List<CubeSkin> cubeSkinComponentList;
	private List<SmallCubeSkin> smallCubeSkinComponentList;
	private List<TinyCubeSkin> tinyCubeSkinComponentList;

	private int tinyCubeAmount;
	private int cubeAmount;							//The amount of long and small cubes to generate
	private int InitialCubeNum;						
	private bool isFirst;							//Refernce to the first cube to instantiate out two.

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
		tinyCubeAmount = 40;
		InitialCubeNum = 34;
		isFirst = true;

		tallSize = 3;

		cubeList = new List<GameObject>();
		smallCubeList = new List<GameObject>();
		tinyCubeList = new List<GameObject>();

		cubeTransList = new List<Transform>();
		smallCubeTransList = new List<Transform>();
		tinyCubeTransList = new List<Transform>();

		cubeComponentList = new List<Cube>();
		smallCubeComponentList = new List<Cube>();
		tinyCubeComponentList = new List<Cube>();

		cubeSkinComponentList = new List<CubeSkin>();
		smallCubeSkinComponentList = new List<SmallCubeSkin>();
		tinyCubeSkinComponentList = new List<TinyCubeSkin>();


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

			cubeSkinComponent = newCube.GetComponent<CubeSkin>();
			cubeSkinComponentList.Add(cubeSkinComponent);

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

			smallCubeSkinComponent = newSmallCube.GetComponent<SmallCubeSkin>();
			smallCubeSkinComponentList.Add(smallCubeSkinComponent);
		}

		for(int i = 0; i < tinyCubeAmount; i++)
		{
			GameObject newTinyCube = Instantiate(tinyCube, spawnerTrans.position, Quaternion.identity) as GameObject;

			newTinyCube.transform.parent = spawnerTrans;

			newTinyCube.SetActive(false);

			tinyCubeList.Add(newTinyCube);

			tinyCubeTrans = newTinyCube.GetComponent<Transform>();
			tinyCubeTransList.Add(tinyCubeTrans);

			tinyCubeComponent = newTinyCube.GetComponent<Cube>();
			tinyCubeComponentList.Add(tinyCubeComponent);

			tinyCubeSkinComponent = newTinyCube.GetComponent<TinyCubeSkin>();
			tinyCubeSkinComponentList.Add(tinyCubeSkinComponent);
		}


		colorNum = Random.Range(0,10);
		CubeMatNum = Random.Range(0,10);

		StartCoroutine(LayoutCube());
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

//				CubeMatNum = twoColorSwitch();


				cubeSkinComponentList[i].ChooseColor(CubeMatNum);
				if(isFirst)
				{
					


					if (!isMoveDown || isEmptyShape) {
						cubeComponentList [i].StartMoveCube (currShape);
					}
					else{
						cubeComponentList [i].StartMoveDown (currShape);

					}
				}
				else{
					if(GameManager.Instance.NumSpawnedCube % 2== 0)
					{
//						CubeMatNum = RandomOneColor();
						CubeMatNum = twoColorSwitch();
					}
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

		if(isExtented)
		{
			xPos--;
			for(int i = 0; i < tinyCubeList.Count; i++)
			{
				if(!tinyCubeList[i].activeInHierarchy)
				{
//					currShape = ChooseShape();
					tinyCubeTransList[i].position = new Vector3(xPos, YSmallPosition(), 0f);
					tinyCubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);

					tinyCubeList[i].SetActive(true);
					if(isFirst)
					{
						if (!isMoveDown || isEmptyShape) {
							tinyCubeComponentList [i].StartMoveCube (currShape);
						}
						else{
							tinyCubeComponentList [i].StartMoveDown (currShape);

						}
					}
					else{
						if (!isBlockShape || isEmptyShape ) {
							tinyCubeComponentList [i].StartMoveDown (currShape);
						}
						else{
							tinyCubeComponentList[i].StartMoveCube(currShape);
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
		}


		if(isObstacle){
			xPos--;
			for(int i =0; i < smallCubeList.Count; i++)
			{
				if(!smallCubeList[i].activeInHierarchy)
				{
					smallCubeTransList[i].position = new Vector3(xPos, YSmallPosition(), 0f);
					smallCubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);

					smallCubeList[i].SetActive(true);

					if(isFirst){
						smallCubeComponentList[i].StartMoveCube(isStraight? StraigtLine() :PatternPosition());
					}else{
						smallCubeComponentList[i].StartMoveDown(isStraight? StraigtLine() :PatternPosition());
					}

					isFirst = !isFirst;
					if(isFirst){
						xPos++;
						GameManager.Instance.NumSpawnedCube += 2;

						break;
					}

				}
			}
		}

		if(isMidLineShape){
			xPos--;
			for(int i =0; i < tinyCubeList.Count; i++)
			{
				if(!tinyCubeList[i].activeInHierarchy)
				{
					tinyCubeTransList[i].position = new Vector3(xPos, YSmallPosition(), 0f);
					tinyCubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);

					tinyCubeList[i].SetActive(true);

					if(isFirst){
						tinyCubeComponentList[i].StartMoveCube(DeadLine());
					}else{
						tinyCubeComponentList[i].StartMoveDown(DeadLine());
					}

					isFirst = !isFirst;
					if(isFirst){
						xPos++;
						GameManager.Instance.NumSpawnedCube += 2;

						break;
					}

				}
			}
		}


		isMidLineShape = false;
		isObstacle = false;
		isExtented = false;
		yield return 0;
	}

	private int shapeValue = 14;
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
		case 6: return VReverseShape2();
		case 7: return BlockShape();
		case 8: return ObstacleShape();
		case 9: return Spike();
		case 10: return VShape2();
		case 11: return BlockShape();
		case 12: return VReverseShape2();
		case 13: return BlockShape();
		case 14: return VReverseShape3();
		case 15: return Spike();
		case 16: return VShape3();	
		case 17: return BlockShape2();
		case 18: return MidLineShape();				//Deadly Shape
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
				if(shapeValue > 18){
					countShape = 1;
					shapeValue = 1;
				}

				if(shapeValue == 17)
				{
					isStraight = !isStraight;
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
			}
		}
		return unit;
	}

	private int flatUnit = 0; 
	private float VReverseShape2(){
		isEmptyShape = false;
		isBlockShape = true;
		isMoveDown = false;
		isZigzag = true;
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if(unit == 6)
				{	
					if(flatUnit < 17)
					{
						unit--;
						flatUnit++;

					}
					else{
						flatUnit = 0;
					}
					flatUnit++;
					return unit;
				}

				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
				}
			} else {
				unit = unit - 1f;
				if(unit == 4)
				{	
					if(flatUnit < 18)
					{
						unit++;
						flatUnit++;

					}
					else{
						flatUnit = 0;
					}
					flatUnit++;
					return unit;
				}
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

	private float VReverseShape3(){
//		Debug.Log("VReverseshape3");
		isEmptyShape = false;
		isBlockShape = true;
		isMoveDown = false;
		isZigzag = true;

		isExtented = true;
		if (isFirst) {
			if (switchPlusMinus) {
				if (!isDouble) {
					unit = unit + 1f;
					isDouble = !isDouble;
//					Debug.Log("Plus");
				}else{
					isDouble = !isDouble;
				}

				if (unit > 3f) {
					switchPlusMinus = !switchPlusMinus;
//					Debug.Log("Switch");
				}
			} else {
				if (!isDouble) {
					unit = unit - 1f;
					isDouble = !isDouble;
				}else{
					isDouble = !isDouble;
				}
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (!isDouble) {
				if (unit == 0) {
					shapeValue = 0;								//change the shape, exit this function
				}
			}
		}
		return unit;
	}


	private float VShape(){
		isMoveDown = true;
		isEmptyShape = false;
		isBlockShape = false;
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

	private float VShape2(){


		isMoveDown = true;
		isEmptyShape = false;
		isZigzag = true;
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if(unit == 6)
				{	
					if(flatUnit < 17)
					{
						unit--;
						flatUnit++;

					}
					else{
						flatUnit = 0;
					}
					flatUnit++;
					return unit;
				}
				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
				}
			} else {
				unit = unit - 1f;
				if(unit == 4)
				{	
					if(flatUnit < 18)
					{
						unit++;
						flatUnit++;

					}
					else{
						flatUnit = 0;
					}
					flatUnit++;
					return unit;
				}
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
		
	private bool isExtented = false;
	private bool isDouble = false;
	private float VShape3(){
//		Debug.Log("Vshape3");
		isMoveDown = true;
		isEmptyShape = false;
		isBlockShape = false;
		isZigzag = true;
		isExtented = true;
		if (isFirst) {
			if (switchPlusMinus) {
				if (!isDouble) {
					unit = unit + 1f;
					isDouble = !isDouble;
//					Debug.Log("Plus");
				}else{
					isDouble = !isDouble;
				}

				if (unit > 3f) {
					switchPlusMinus = !switchPlusMinus;
//					Debug.Log("Switch");
				}
			} else {
				if (!isDouble) {
					unit = unit - 1f;
					isDouble = !isDouble;
				}else{
					isDouble = !isDouble;
				}
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (!isDouble) {
				if (unit == 0) {
					shapeValue = 0;								//change the shape, exit this function
				}
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
		


	private int numOfSpace1 = 0;
	private int maxSpace1 = 15;
	private int countShape1 = 0;
	private float ObstacleShape()
	{
		isEmptyShape = true;
		isZigzag = false;
		isObstacle = true;
		if (isFirst) {
			numOfSpace1++;
		}
		else{
			if (numOfSpace1 > maxSpace1) {
				shapeValue = 0;	
				numOfSpace1 = 0;								//reset numOfSpace
			}
		}

		return 4;
	}

	private int countPat  = 0;
	private int countPattern = 0;
	private bool isPattern;
	private float PatternPosition()
	{	
		if (isFirst) {
			countPat++;

			if(countPat % 3 == 0)
			{
				countPattern++;
			}
//			isPattern = !isPattern;
			if (countPattern % 2 == 0)
				return 2f;
			else
				return 3f;
		}
		else{
			if (countPattern % 2 == 0)
				return 2f;
			else
				return 3f;
		}
	}

	private bool isStraight = true;
	private float StraigtLine()
	{
		return 2f;	
	}

	private float DeadLine()
	{
		if(isFirst)
			return 2f;
		else 
			return 1f;
	}

	private bool isMidLineShape;
	private float MidLineShape()
	{

//		Debug.Log("Here");
		isEmptyShape = true;
		isZigzag = false;
		isMidLineShape = true;
		isObstacle = false;
		if (isFirst) {
			numOfSpace1++;
		}
		else{
			if (numOfSpace1 > maxSpace1) {
				shapeValue = 0;	
				numOfSpace1 = 0;								//reset numOfSpace
			}
		}

		return 2;
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
			if (!isExtented) {
				if (isZigzag || isObstacle)
					return 13f;
				else
					return 12f;
			}else{
				return 16f;
			}
		}
		else{
			if (!isExtented) {
				if (isZigzag || isObstacle)
					return -13f;
				else
					return -12f;
			}
			else{
				return -16f;
			}
		}
	}

	private float YSmallPosition()
	{

		if(isFirst){
			if (!isExtented) {
				if (isMidLineShape)
					return 0;
				else
					return 1;
			}else{
				return 3f;
			}
			
		}
		else{
			if (!isExtented) {
				return -1;
			}else{
				return -3f;
			}
		}
	}

	private bool isTwoColorSwitch = true;
	private int countCube = 1;
	private int colorNum = 1;
	private int numOfSwitches = 0;
	private int twoColorSwitch()
	{
//		countCube++;
//		if(countCube % 2 == 0){
//			isTwoColorSwitch = !isTwoColorSwitch;
//
//		}
		numOfSwitches++;
		if(numOfSwitches > 24)
		{
			numOfSwitches = 0;
			colorNum = RandomOneColor();
		}
		isTwoColorSwitch = !isTwoColorSwitch;
		if(isTwoColorSwitch){
			return colorNum;
		}else{
			
			return colorNum + 1;
		}
	}


	private int RandomOneColor()
	{
		return Random.Range(0,10);
	}
}