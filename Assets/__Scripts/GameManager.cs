using UnityEngine;
using System.Collections;

public class GameManager : Singleton<GameManager> {

	private int numSpawnedCube = 2;

	public int NumSpawnedCube
	{
		get{return numSpawnedCube;}
		set{numSpawnedCube = value;}
	}

	private int smallCubeColorNum = 0;

	public int SmallCubeColorNum
	{
		get{return smallCubeColorNum;}
		set{smallCubeColorNum = value;}
	}

	private int tinyCubeColorNum = 0;

	public int TinyCubeColorNum
	{
		get{return tinyCubeColorNum;}
		set{tinyCubeColorNum = value;}
	}

	private string playerName = "RedHeart";

	public string PlayerName
	{
		get{return playerName;}
		set{playerName = value;}
	}

	// Use this for initialization
	void Start () {
		SmallCubeColorNum = Random.Range(0, 24);
		TinyCubeColorNum = Random.Range(0, 24);
	}
}
