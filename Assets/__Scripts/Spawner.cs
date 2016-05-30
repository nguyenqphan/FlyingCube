using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Spawner : MonoBehaviour {

	private Transform spawnerTrans;

	public GameObject cube;

	private Transform cubeTrans;

	private List<GameObject> cubeList;

	private List<Transform> cubeTransList;

	private int cubeAmount;
	private int InitialCubeNum;

	private int xPos;
	private int yPos;
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
		InitialCubeNum = 30;

		cubeList = new List<GameObject>();

		cubeTransList = new List<Transform>();

		for(int i = 0; i < cubeAmount; i++)
		{
			GameObject newCube = Instantiate(cube, spawnerTrans.position, Quaternion.identity) as GameObject;

			newCube.transform.parent = spawnerTrans;

			newCube.SetActive(false);

			cubeList.Add(newCube);

			cubeTrans = newCube.GetComponent<Transform>();
			cubeTransList.Add(cubeTrans);

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

	public void StartSpawnCube(float yPosision)
	{
		StartCoroutine(SpawnCube(yPosision));
	}

	IEnumerator SpawnCube(float yPosition )
	{
		for(int i = 0; i < cubeList.Count; i++)
		{
			if(!cubeList[i].activeInHierarchy)
			{
				if(yPosition > 0)

					cubeTransList[i].position = new Vector3(xPos, yPos +15f, 0f);
				else
					cubeTransList[i].position = new Vector3(xPos, yPos -15f, 0f);
					
				cubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);

				cubeList[i].SetActive(true);

				xPos++;
				break;
			}
		}

		yield return 0;
	}

	IEnumerator LayoutCube()
	{
		for(int i = 0; i < InitialCubeNum; i += 2)
		{
			
			cubeTransList[i].position = new Vector3(xPos, yPos + 15f, 0f);
			cubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);

			cubeList[i].SetActive(true);

			cubeTransList[i + 1].position =  new Vector3(xPos, yPos - 15f, 0f);
			cubeTransList[i + 1].rotation = Quaternion.Euler(0f,0f,0f);

			cubeList[i + 1].SetActive(true);
			xPos++;
			yield return 0;
		}
	}


	void FindCube()
	{
		
	}
}
