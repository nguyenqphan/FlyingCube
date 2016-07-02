using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UpdateScore : MonoBehaviour {

	[HideInInspector]
	public bool isCountingScore = true;
	public Text liveScoreLable;						//Display Live Score
	public Text goldLabel;							//Display amount of gold
	public Text bestScoreLable;						//Display Best Score after the game ends
	public Text curScoreLabel;						//Display current score after the game ends


	public void IncreaseScore()
	{
		StopAllCoroutines();
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

	public void ChangeLiveScore()
	{
		liveScoreLable.text = GameManager.Instance.Score.ToString(); 
//		GameCenterAPI.GCReportAchievement();
	}

	public void ChangeAmountOfDiamond()
	{
		goldLabel.text = GameManager.Instance.AmountOfDiamond.ToString();
	}

	public void DisplayFinalScore()
	{
		
		curScoreLabel.text = GameManager.Instance.Score.ToString();

		if(GameManager.Instance.Score > GameManager.Instance.BestScore)
		{
			GameManager.Instance.BestScore = GameManager.Instance.Score;
		}
		bestScoreLable.text = GameManager.Instance.BestScore.ToString();

	}
}
