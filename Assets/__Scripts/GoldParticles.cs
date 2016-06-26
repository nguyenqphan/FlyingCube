using UnityEngine;
using System.Collections;

public class GoldParticles : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void SetGoldDeactivate()
	{
		StartCoroutine(GoldDeactivate());
	}

	private IEnumerator GoldDeactivate()
	{
		yield return new WaitForSeconds(1f);
		if(this.gameObject.activeInHierarchy)
		{
			this.gameObject.SetActive(false);
		}
	}
}
