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
	private int stateIndexSB = 16;
	private int stateIndexSC = 32;

	public GameObject content;
	public Button[] buttons;
	private Button curButton;
	public PlayerCollection[] playerCollections;

	private int buttonIndex = 0;
	private int tempIndex;
	private int shopIndex = 0;
	// Use this for initialization


	UpdateScore updateScore;
	void Awake()
	{
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
	}

	void Start () {

		GameManager.Instance.Load();

////		//TEST: reset all the states
		GameManager.Instance.CurPlayerAvail = 1;							//Default player is always available
		GameManager.Instance.CurPlayerAvailSB = 0;
		GameManager.Instance.CurPlayerAvailSC = 0;
		GameManager.Instance.CurPlayerIndex = 0;

		GameManager.Instance.CurPlayerName = "defPlayer";

//
		GameManager.Instance.AmountOfDiamond = 10000;
		updateScore.ChangeAmountOfDiamond();
		GameManager.Instance.Save();
//
		buttons = content.GetComponentsInChildren<Button>();

		for(int i = 0; i < buttons.Length; i++)
		{

			int btnIndex = buttonIndex;
//			buttons[i].onClick.AddListener(() => ChoosePlayer(btnIndex));


			//condition to turn of the lock image when the game starts
			if (shopIndex > 31) {
				buttons[i].onClick.AddListener(() => ChoosePlayerSC(btnIndex));
				if ((GameManager.Instance.CurPlayerAvailSC & 1 << btnIndex) == 1 << btnIndex) {
					buttons [i].gameObject.transform.GetChild (0).gameObject.SetActive (false);
				}
			}else if(shopIndex > 15){
				buttons[i].onClick.AddListener(() => ChoosePlayerSB(btnIndex));
				if((GameManager.Instance.CurPlayerAvailSB & 1 << btnIndex) == 1 << btnIndex){
					buttons [i].gameObject.transform.GetChild (0).gameObject.SetActive (false);
				}
			}else {
				buttons[i].onClick.AddListener(() => ChoosePlayer(btnIndex));
				if((GameManager.Instance.CurPlayerAvail & 1 << btnIndex) == 1 << btnIndex){
//				Debug.Log(GameManager.Instance.CurPlayerAvail);
				buttons [i].gameObject.transform.GetChild (0).gameObject.SetActive (false);
			}
			}
			//condition to turn off the check image when the game starts
			if(GameManager.Instance.CurPlayerIndex == shopIndex)
			{
				buttons[i].gameObject.transform.GetChild(1).gameObject.SetActive(true);
				tempIndex = buttonIndex;

			}

			shopIndex++;
			buttonIndex++;
			if(buttonIndex > 15){
				buttonIndex = 0;
			}
		}
			
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private void ChoosePlayer(int index)
	{
		

		if((GameManager.Instance.CurPlayerAvail & 1 << index) == 1 << index)
		{
			GameManager.Instance.IsStartButtonPressed = true; 											//... to replace startButton with RefreshButton to reload scene
			GameManager.Instance.IsCameraMoved = false;													//... to move camera forward on first tap to begin the game
			GameManager.Instance.IsStarted = true;

//			Debug.Log("Button Index in Shop A " + index);
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
				GameManager.Instance.IsStartButtonPressed = true; 											//... to replace startButton with RefreshButton to reload scene
				GameManager.Instance.IsCameraMoved = false;													//... to move camera forward on first tap to begin the game
				GameManager.Instance.IsStarted = true;

//				Debug.Log("Current index in Shop A " + index );
				GameManager.Instance.CurPlayerIndex = index;	
				GameManager.Instance.CurPlayerName = playerCollections[index].nameOfPlayer;//Choose player
				SwapCheckImage(index);																	//Swap CheckImage
				GameManager.Instance.AmountOfDiamond -= playerCollections[index].priceOfPlayer;
				updateScore.ChangeAmountOfDiamond();

				GameManager.Instance.CurPlayerAvail += 1 << index;
				playerCollections[index].lockImage.SetActive(false);
//				Debug.Log(GameManager.Instance.AmountOfDiamond);										//Turn lockImage off
				GameManager.Instance.Save();
			}
		}
	}
	private void ChoosePlayerSB(int index)
	{


		if((GameManager.Instance.CurPlayerAvailSB & 1 << index) == 1 << index)
		{
			GameManager.Instance.IsStartButtonPressed = true; 											//... to replace startButton with RefreshButton to reload scene
			GameManager.Instance.IsCameraMoved = false;													//... to move camera forward on first tap to begin the game

			GameManager.Instance.IsStarted = true;
//			Debug.Log("Button Index " + index);
			GameManager.Instance.CurPlayerIndex = index + stateIndexSB;												//Choose player
			GameManager.Instance.CurPlayerName = playerCollections[index + stateIndexSB].nameOfPlayer;
			playerCollections[index + stateIndexSB].lockImage.SetActive(false);										//turn lockImage off
			SwapCheckImage(index + stateIndexSB);																		//Swap CheckImage

			GameManager.Instance.Save();
		}
		else{
			//if this player has not been bought....
			if(GameManager.Instance.AmountOfDiamond >= playerCollections[index + stateIndexSB].priceOfPlayer)
			{
				GameManager.Instance.IsStartButtonPressed = true; 											//... to replace startButton with RefreshButton to reload scene
				GameManager.Instance.IsCameraMoved = false;													//... to move camera forward on first tap to begin the game

				GameManager.Instance.IsStarted = true;
//				Debug.Log(index + stateIndexSB);
				GameManager.Instance.CurPlayerIndex = index + stateIndexSB;
				GameManager.Instance.CurPlayerName = playerCollections[index + stateIndexSB].nameOfPlayer;//Choose player
				SwapCheckImage(index + stateIndexSB);																	//Swap CheckImage
				GameManager.Instance.AmountOfDiamond -= playerCollections[index + stateIndexSB].priceOfPlayer;
				updateScore.ChangeAmountOfDiamond();

				GameManager.Instance.CurPlayerAvailSB += 1 << index;
				playerCollections[index + stateIndexSB].lockImage.SetActive(false);
//				Debug.Log(GameManager.Instance.AmountOfDiamond);										//Turn lockImage off
				GameManager.Instance.Save();
			}
		}
	}

	private void ChoosePlayerSC(int index)
	{


		if((GameManager.Instance.CurPlayerAvailSC & 1 << index) == 1 << index)
		{
			GameManager.Instance.IsStartButtonPressed = true; 											//... to replace startButton with RefreshButton to reload scene
			GameManager.Instance.IsCameraMoved = false;													//... to move camera forward on first tap to begin the game
			GameManager.Instance.IsStarted = true;

//			Debug.Log("Button Index " + index);
			GameManager.Instance.CurPlayerIndex = index + stateIndexSC;												//Choose player
			GameManager.Instance.CurPlayerName = playerCollections[index + stateIndexSC].nameOfPlayer;
			playerCollections[index + stateIndexSC].lockImage.SetActive(false);										//turn lockImage off
			SwapCheckImage(index + stateIndexSC);																		//Swap CheckImage

			GameManager.Instance.Save();
		}
		else{
			//if this player has not been bought....
			if(GameManager.Instance.AmountOfDiamond >= playerCollections[index + stateIndexSC].priceOfPlayer)
			{
				GameManager.Instance.IsStartButtonPressed = true; 											//... to replace startButton with RefreshButton to reload scene
				GameManager.Instance.IsCameraMoved = false;													//... to move camera forward on first tap to begin the game
				GameManager.Instance.IsStarted = true;

//				Debug.Log(index + stateIndexSB);
				GameManager.Instance.CurPlayerIndex = index + stateIndexSC;	
				GameManager.Instance.CurPlayerName = playerCollections[index + stateIndexSC].nameOfPlayer;//Choose player
				SwapCheckImage(index + stateIndexSC);																	//Swap CheckImage
				GameManager.Instance.AmountOfDiamond -= playerCollections[index + stateIndexSC].priceOfPlayer;
				updateScore.ChangeAmountOfDiamond();

				GameManager.Instance.CurPlayerAvailSC += 1 << index;
				playerCollections[index + stateIndexSC].lockImage.SetActive(false);
//				Debug.Log(GameManager.Instance.AmountOfDiamond);										//Turn lockImage off
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
