using UnityEngine;
using System.Collections;

public class GameManager : Singleton<GameManager> {

	private int numSpawnedCube = 2;

	public int NumSpawnedCube
	{
		get{return numSpawnedCube;}
		set{numSpawnedCube = value;}
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
