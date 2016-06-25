using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	private Rigidbody playerRigid;
	private Transform playerTrans;
	private Spawner spawner;

	private bool tap;
	// Use this for initialization

	void Awake()
	{
		playerRigid = GetComponent<Rigidbody>();
		playerTrans = GetComponent<Transform>();
		spawner = GameObject.FindWithTag("Spawner").GetComponent<Spawner>();

	}

	void Start () {

		playerRigid.useGravity = false;
//		Debug.Log(spawner);
	}
	
	// Update is called once per frame
	void Update () {

		if(Input.GetButtonDown("Fire1"))
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
		}
	}


	void OnCollisionEnter()
	{
		this.gameObject.SetActive(false);
		spawner.PlayPlayerBreaking(playerTrans);
	}


	void Flap()
	{
		playerRigid.velocity = Vector3.zero;
		playerRigid.AddForce(Vector3.up * 500f, ForceMode.Force);
	}


}
