using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	private Rigidbody playerRigid;
	private Transform playerTrans;
	private Spawner spawner;
	private CameraMove cameraMove;
	private PanelController panelController;
	private UpdateScore updateScore;

	private bool tap;
	// Use this for initialization

	void Awake()
	{
		playerRigid = GetComponent<Rigidbody>();
		playerTrans = GetComponent<Transform>();
		spawner = GameObject.FindWithTag("Spawner").GetComponent<Spawner>();
		cameraMove = GameObject.FindWithTag("MainCamera").GetComponent<CameraMove>();
		panelController = GameObject.FindWithTag("UI").GetComponent<PanelController>();
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
	}

	void Start () {
		playerRigid.useGravity = false;
		GameManager.Instance.IsSlowScore = false;
//		Debug.Log("Start");
	}
	
	// Update is called once per frame
	void Update () {

		if(Input.GetButtonDown("Fire1") && GameManager.Instance.IsCameraMoved)
		{
			tap = true;
		}
	}

	void FixedUpdate()
	{		
		
		if(tap)
		{
			playerRigid.useGravity = true;
			Flap();
			tap = false;
			if(GameManager.Instance.IsStarted == true)
			{
				GameManager.Instance.IsStarted = false;
				cameraMove.isPlaying = true;
				cameraMove.GoingForward();

				updateScore.isCountingScore = true;

				if(!GameManager.Instance.IsDouble)
				{
					GameManager.Instance.IsSlowScore = true;					
				}
				updateScore.IncreaseScore();
			}
		}
	}


	void OnTriggerEnter(Collider other)
	{
		if(other.CompareTag("Cube"))
		{
			GameManager.Instance.NumOfGame++;
			GameManager.Instance.IsDouble = false;
			GameManager.Instance.IsSlowScore = false;
			panelController.ShowOrHideFastImage();
			this.gameObject.SetActive(false);
			spawner.PlayPlayerBreaking(playerTrans);
			cameraMove.isPlaying = false; 						//stop the camera


			panelController.ShowMainPanel();
			panelController.ShowScorePanel();
			GameManager.Instance.IsStarted = true;
			GameManager.Instance.IsCameraMoved = true;

			updateScore.isCountingScore = false;				//Stop counting score;
			updateScore.DisplayFinalScore();

			GameManager.Instance.Save();						//Save the state of the game
		}
	}


	void Flap()
	{
		playerRigid.velocity = Vector3.zero;
		playerRigid.AddForce(Vector3.up * 500f, ForceMode.Force);
	}


}
