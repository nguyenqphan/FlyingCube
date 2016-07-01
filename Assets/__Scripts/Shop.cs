using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class Shop : MonoBehaviour {

	[System.Serializable]
	public class PlayerCollection{
		public string nameOfPlayer;
		public int priceOfPlayer;
		public bool isUnlocked;
	}

	public GameObject content;
	public Button[] buttons;
	private Button curButton;
	public PlayerCollection[] playerCollections;

	private int buttonIndex = 0;

	// Use this for initialization
	void Start () {

		GameManager.Instance.Load();

		buttons = content.GetComponentsInChildren<Button>();

		for(int i = 0; i < buttons.Length; i++)
		{

			int btnIndex = buttonIndex;
			buttons[i].onClick.AddListener(() => ChoosePlayer(btnIndex));
			buttonIndex++;
		}
			
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	private void ChoosePlayer(int index)
	{
		Debug.Log(index);
		GameManager.Instance.CurPlayerIndex = index;
		GameManager.Instance.CurPlayerName = playerCollections[index].nameOfPlayer;
		GameManager.Instance.Save();
	}
}
