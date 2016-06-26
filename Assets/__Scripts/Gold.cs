using UnityEngine;
using System.Collections;

public class Gold : MonoBehaviour {

	private Spawner spawner;
	private Transform trans;
	void Awake()
	{
		spawner = GameObject.FindWithTag("Spawner").GetComponent<Spawner>();
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
		}
	}
		
}
