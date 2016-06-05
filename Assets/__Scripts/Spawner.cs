﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Spawner : MonoBehaviour {

	private Transform spawnerTrans;

	public GameObject cube;

	private Cube cubeComponent;
	private Transform cubeTrans;

	private List<GameObject> cubeList;

	private List<Transform> cubeTransList;

	private List<Cube> cubeComponentList;



	private int cubeAmount;
	private int InitialCubeNum;
	private bool isSecond;

	private int xPos;
	private int yPos = 0;

	private float unit = 7f;
	private bool switchPlusMinus;

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
		isSecond = true;

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

				if(isSecond)
				{
					cubeComponentList[i].StartMoveCube(ChooseShape());
					Debug.Log("Second " + unit);
				}
				else{
					cubeComponentList[i].StartMoveDown(ChooseShape());
					Debug.Log("first " + unit);
				}
//				YPosition();
				isSecond = !isSecond;
				if(isSecond){
					xPos++;
					GameManager.Instance.NumSpawnedCube += 2;
					break;
				}
			}
		}

		yield return 0;
	}
		
	private int shapeValue;
	private float ChooseShape()
	{
		switch(shapeValue)
		{
			case 0:  return SquareShape();
			case 1:  return PlayShape();
			case 2: return EmptyShape();
			default: return SquareShape();
		}
	}

	private float SquareShape(){
		Debug.Log("Im in Square Shape");
		if (isSecond) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if (unit > 7f) {
					switchPlusMinus = !switchPlusMinus;
					shapeValue = 1;
				}
			} else {
				unit = unit - 1f;
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}
		return unit;
	}

	private float PlayShape()
	{
		Debug.Log("Im in PlayShape Shape");
		if(isSecond)
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

	private float EmptyShape()
	{
		return 1;
	}

	private float TallShape()
	{
		tallSize--;
		if(isSecond )
		{
			return 8f;
		}
		return 8;
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
		if(isSecond)
		{
			return 12f;
		}
		else{
			return -12f;
		}
	}
}
