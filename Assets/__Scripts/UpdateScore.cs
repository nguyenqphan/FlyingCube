using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UpdateScore : MonoBehaviour {

	[HideInInspector]
	public bool isCountingScore = true;
	public Text liveScoreLable;

	public void IncreaseScore()
	{
		StartCoroutine(Score());
	}

	IEnumerator Score(){
		while (isCountingScore) {
			yield return new WaitForSeconds (1f); 
			if (isCountingScore == true) {										//this condition make sure no more score is added after the player dies
				GameManager.Instance.Score++;
			}
			ChangeLiveScore();
		}
	}


	private string FormatTime(float timeInSeconds)
	{
		return string.Format("{0}:{1:00}", Mathf.FloorToInt(timeInSeconds/60), Mathf.FloorToInt(timeInSeconds%60)); 
	}

	public void ChangeLiveScore()
	{
		liveScoreLable.text = GameManager.Instance.Score.ToString(); 
//		GameCenterAPI.GCReportAchievement();
	}
}
