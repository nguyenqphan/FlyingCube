using UnityEngine;
using System.Collections;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;

public class GameManager : Singleton<GameManager> {

	private string curPlayerName = "Soccer";

	public string CurPlayerName
	{
		get{return curPlayerName;}
		set{curPlayerName = value;}
	}

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

	private int curPlayerIndex;
	public int CurPlayerIndex{
		get{return curPlayerIndex;}
		set{curPlayerIndex = value;}
	}

	private int curPrice;
	public int CurPrice{
		get{return curPrice;}
		set{curPrice = value;}
	}

	private int curPlayerAvail = 1;
	public int CurPlayerAvail{
		get{return curPlayerAvail;}
		set{curPlayerAvail = value;}
	}

	public void Save()
	{
		BinaryFormatter bf = new BinaryFormatter();
		FileStream file = File.Create(Application.persistentDataPath + "/playerInfo.dat");

		PlayerData data = new PlayerData();

		data.playerIndex = GameManager.Instance.CurPlayerIndex;
		data.price = GameManager.Instance.CurPrice;
		data.playerAvailability = GameManager.Instance.CurPlayerAvail;
		data.name = GameManager.Instance.CurPlayerName;
		bf.Serialize(file, data);
		file.Close();
	}

	public void Load()
	{
		if(File.Exists(Application.persistentDataPath + "/playerInfo.dat"))
		{
			BinaryFormatter bf = new BinaryFormatter();
			FileStream file = File.Open(Application.persistentDataPath + "/playerInfo.dat", FileMode.Open);
			PlayerData data = (PlayerData)bf.Deserialize(file);

			GameManager.Instance.CurPlayerIndex = data.playerIndex;
			GameManager.Instance.CurPrice = data.price;
			GameManager.Instance.CurPlayerAvail = data.playerAvailability;
			GameManager.Instance.CurPlayerName = data.name;

			file.Close();
		}
	}

	[System.Serializable]
	class PlayerData
	{
		public string name;
		public int playerIndex;
		public int price;
		public int playerAvailability;
	}
}
