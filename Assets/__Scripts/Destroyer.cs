using UnityEngine;
using System.Collections;

public class Destroyer : MonoBehaviour {	

	private bool isCollied;


	private Spawner spanwner;

	void Awake()
	{
		spanwner = GameObject.FindWithTag("Spawner").GetComponent<Spawner>();
	}

	void OnTriggerEnter(Collider other)
	{
		other.gameObject.SetActive(false);

		if(isCollied)
		{
			spanwner.StartSpawnCube();
		}
	
		isCollied = !isCollied;
	}
}
