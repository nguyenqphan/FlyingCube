using UnityEngine;
using System.Collections;

public class Gold : MonoBehaviour {

	private Spawner spawner;
	private Transform trans;
	private UpdateScore updateScore;
	void Awake()
	{
		spawner = GameObject.FindWithTag("Spawner").GetComponent<Spawner>();
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
		trans = GetComponent<Transform>();
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


		}
	}
		
}
