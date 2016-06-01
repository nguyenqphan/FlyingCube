using UnityEngine;
using System.Collections;

public class Cube : MonoBehaviour {



	private Transform cubeTrans;


	private float startingY;
	private float newY;

	private float speed;
	private float direction;
	private bool isMoving;

	void Awake()
	{
		cubeTrans = GetComponent<Transform>();
	}

	// Use this for initialization
	void Start () {

		speed = 1f;
		direction = 1f;
		isMoving = true;

	}

	public void StartMoveCube(float distance)
	{
		StartCoroutine(MoveCube(distance));
	}

	IEnumerator MoveCube(float distance)
	{
		startingY = cubeTrans.localPosition.y;
		while(isMoving)
		{
			newY = cubeTrans.localPosition.y + distance * speed * direction * Time.deltaTime;

			if(newY >= startingY + distance)
			{
				newY = Mathf.Floor(newY);
				isMoving = false;
			}

			cubeTrans.localPosition = new Vector3(cubeTrans.localPosition.x, newY, cubeTrans.localPosition.z);

		

			yield return 0;
		}
		isMoving = true;
	}

	public void StartMoveTopCube(float distance)
	{
		StartCoroutine(MoveTopCube(distance));
	}


	IEnumerator MoveTopCube(float distance)
	{
		startingY = cubeTrans.localPosition.y;
		while(isMoving)
		{
			newY = cubeTrans.localPosition.y + distance * speed * direction * Time.deltaTime;

			if(newY >= startingY + distance)
			{
				newY = Mathf.Floor(newY);
				isMoving = false;
			}

			cubeTrans.localPosition = new Vector3(cubeTrans.localPosition.x, newY, cubeTrans.localPosition.z);

			yield return 0;
		}
		isMoving = true;
	}

	public void StartMoveDown(float distance)
	{
		StartCoroutine(MoveDown(distance));
	}

	IEnumerator MoveDown(float distance)
	{
		startingY = cubeTrans.localPosition.y;
		while(isMoving)
		{
			newY = cubeTrans.localPosition.y  - distance * speed * direction * Time.deltaTime;

			if(newY  < startingY - distance)
			{
				newY = Mathf.Floor(newY);
				isMoving = false;
			}

			cubeTrans.localPosition = new Vector3(cubeTrans.localPosition.x, newY, cubeTrans.localPosition.z);

			yield return 0;
		}
		isMoving = true;
	}

}
