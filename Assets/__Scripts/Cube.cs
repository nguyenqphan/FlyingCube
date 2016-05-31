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

		speed = 2f;
		direction = 1f;
		isMoving = true;

	}

	public void StartMoveCube(float distance)
	{
		StartCoroutine(MoveCube(distance));
	}

	IEnumerator MoveCube(float distance)
	{
		startingY = cubeTrans.position.y;
		while(isMoving)
		{
			newY = cubeTrans.position.y + distance * speed * direction * Time.deltaTime;

			if(newY >= startingY + distance)
			{
				newY = Mathf.Floor(newY);
				isMoving = false;
			}

			cubeTrans.position = new Vector3(cubeTrans.position.x, newY, cubeTrans.position.z);

		

			yield return 0;
		}
		isMoving = true;
	}

}
