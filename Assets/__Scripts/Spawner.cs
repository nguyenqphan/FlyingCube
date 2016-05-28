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

	void Awake()
	{
		spawnerTrans = GetComponent<Transform>();
	}

	// Use this for initialization
	void Start () {
		cubeAmount = 30;

		cubeList = new List<GameObject>();

		cubeTransList = new List<Transform>();

		for(int i = 0; i < cubeAmount; i++)
		{
			GameObject newCube = Instantiate(cube, spawnerTrans.position, Quaternion.identity) as GameObject;

			newCube.transform.parent = spawnerTrans;

			newCube.SetActive(false);

			cubeList.Add(newCube);

			cubeTrans = newCube.GetComponent<Transform>();
			
			newCube.SetActive(false);

			cubeList.Add(newCube);

			cubeTrans = newCube.GetComponent<Transform>();
			cubeTransList.Add(cubeTrans);

		}
	}
}
