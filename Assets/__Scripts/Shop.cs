using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class Shop : MonoBehaviour {

	[System.Serializable]
	public class PlayerCollection{
		public string nameOfPlayer;
		public int priceOfPlayer;
		public bool isUnlocked;
		public GameObject lockImage;
		public GameObject checkImage;
	}
		
	public GameObject content;
	public Button[] buttons;
	private Button curButton;
	public PlayerCollection[] playerCollections;

	private int buttonIndex = 0;
	private int tempIndex;
	// Use this for initialization
	void Start () {

		GameManager.Instance.Load();


		GameManager.Instance.CurPlayerAvail = 7;
		GameManager.Instance.CurPlayerIndex = 0;
		GameManager.Instance.AmountOfDiamond = 1000;
		GameManager.Instance.Save();

		buttons = content.GetComponentsInChildren<Button>();

		for(int i = 0; i < buttons.Length; i++)
		{

			int btnIndex = buttonIndex;
			buttons[i].onClick.AddListener(() => ChoosePlayer(btnIndex));


			//condition to turn of the lock image when the game starts
			if((GameManager.Instance.CurPlayerAvail & 1 << btnIndex) == 1 << btnIndex) {
				buttons [i].gameObject.transform.GetChild (0).gameObject.SetActive (false);
			}

			//condition to turn off the check image when the game starts
			if(GameManager.Instance.CurPlayerIndex == btnIndex)
			{
				buttons[i].gameObject.transform.GetChild(1).gameObject.SetActive(true);
				tempIndex = buttonIndex;

			}

			buttonIndex++;
		}
			
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	private void ChoosePlayer(int index)
	{
		

		if((GameManager.Instance.CurPlayerAvail & 1 << index) == 1 << index)
		{
			Debug.Log("Button Index " + index);
			GameManager.Instance.CurPlayerIndex = index;												//Choose player
			GameManager.Instance.CurPlayerName = playerCollections[index].nameOfPlayer;
			playerCollections[index].lockImage.SetActive(false);										//turn lockImage off
			SwapCheckImage(index);																		//Swap CheckImage

			GameManager.Instance.Save();
		}
		else{
			//if this player has not been bought....
			if(GameManager.Instance.AmountOfDiamond >= playerCollections[index].priceOfPlayer)
			{

				Debug.Log(index);
				GameManager.Instance.CurPlayerIndex = index;											//Choose player
				SwapCheckImage(index);																	//Swap CheckImage
				GameManager.Instance.AmountOfDiamond -= playerCollections[index].priceOfPlayer;
				GameManager.Instance.CurPlayerAvail += 1 << index;
				playerCollections[index].lockImage.SetActive(false);
				Debug.Log(GameManager.Instance.AmountOfDiamond);										//Turn lockImage off
				GameManager.Instance.Save();
			}
		}
	}

	private void SwapCheckImage(int index)
	{
		playerCollections[index].checkImage.SetActive(true);
		if (index != tempIndex) {
			playerCollections [tempIndex].checkImage.SetActive (false);
			tempIndex = index;
		}

	}
}
