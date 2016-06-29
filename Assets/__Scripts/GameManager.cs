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

	private string playerName = "CubeDiamond";

	public string PlayerName
	{
		get{return playerName;}
		set{playerName = value;}
	}

	private bool isStarted = false;

	public bool IsStarted{
		get{return isStarted;}
		set{isStarted = value;}
	}

	private bool isCameraMoved = false;

	public bool IsCameraMoved
	{
		get{return isCameraMoved;}
		set{isCameraMoved = value;}
	}

	private int score = 0;

	public int Score{
		get{return score;}
		set{score = value;	}
	}

	private int gold = 0;

	public int Gold{
		get{return gold;}
		set{gold = value;}
	}

	// Use this for initialization
	void Start () {
		SmallCubeColorNum = Random.Range(0, 24);
		TinyCubeColorNum = Random.Range(0, 24);
	}
}
