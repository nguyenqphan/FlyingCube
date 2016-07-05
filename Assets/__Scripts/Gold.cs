using UnityEngine;
using System.Collections;

public class Gold : MonoBehaviour {

	private Spawner spawner;
	private Transform trans;
	private UpdateScore updateScore;
	private SoundManager soundManager;
	void Awake()
	{
		spawner = GameObject.FindWithTag("Spawner").GetComponent<Spawner>();
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
		trans = GetComponent<Transform>();
		soundManager = GameObject.FindWithTag("GameManager").GetComponent<SoundManager>();
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider other)
	{
		gameObject.SetActive(false);
	
		if (other.CompareTag("Player")) {
			spawner.StartGoldBreaking (trans);
			GameManager.Instance.AmountOfDiamond++;
			updateScore.ChangeAmountOfDiamond();
			soundManager.PlayPickUpClip();


		}
	}
		
}
