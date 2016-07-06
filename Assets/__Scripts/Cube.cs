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
		isMoving = true;									//Need this statement to make cubes move

	}

	public void StartMoveCube(float distance)
	{
		StopAllCoroutines();
		StartCoroutine(MoveCube(distance));
	}

	IEnumerator MoveCube(float distance)
	{
		isMoving = true;
		startingY = cubeTrans.localPosition.y;

		//condition to fix the bug that the last cube does not position correctly.
//		if(distance < 1f){
//					isMoving = false; 
//			}
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

//	public void StartMoveTopCube(float distance)
//	{
//		StartCoroutine(MoveTopCube(distance));
//	}
//
//
//	IEnumerator MoveTopCube(float distance)
//	{
//		startingY = cubeTrans.localPosition.y;
//		if(distance < 1f){
//			isMoving = false;
//		}
//		while(isMoving)
//		{
//			newY = cubeTrans.localPosition.y + distance * speed * direction * Time.deltaTime;
//
//			if(newY > startingY + distance)
//			{
//				newY = Mathf.Floor(newY);
//				isMoving = false;
//			}
//
//			cubeTrans.localPosition = new Vector3(cubeTrans.localPosition.x, newY, cubeTrans.localPosition.z);
//
//			yield return 0;
//		}
//		isMoving = true;
//	}

	public void StartMoveDown(float distance)
	{
		StopAllCoroutines();
		StartCoroutine(MoveDown(distance));
	}

	IEnumerator MoveDown(float distance)
	{
		isMoving = true;									//Need this statement to make Obstacle move
		startingY = cubeTrans.localPosition.y;
		while(isMoving)
		{
			newY = cubeTrans.localPosition.y  - distance * speed * direction * Time.deltaTime;

			if(newY  < startingY - distance)
			{
				newY = Mathf.Ceil(newY);
				isMoving = false;
			}

			cubeTrans.localPosition = new Vector3(cubeTrans.localPosition.x, newY, cubeTrans.localPosition.z);

			yield return 0;
		}
		isMoving = true;
	}

}
