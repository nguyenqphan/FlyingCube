using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	public Transform playerTrans;
	public Rigidbody playerRigid;

	private bool tap;
	// Use this for initialization
	void Start () {
		playerRigid.useGravity = false;
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


	void Flap()
	{
		playerRigid.velocity = Vector3.zero;
		playerRigid.AddForce(Vector3.up * 500f, ForceMode.Force);
	}


		
}
