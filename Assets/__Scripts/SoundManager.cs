using UnityEngine;
using System.Collections;
using UnityEngine.Audio;

public class SoundManager : MonoBehaviour {

//	public AudioMixer mainMixer;

	public AudioClip mainMusicClip;
	private AudioSource mainMusicSource;

	public AudioClip pickUpClip;
	private AudioSource pickUpSource;

	public AudioClip tapClip;
	private AudioSource tapSource;

	public AudioClip playerDieClip;
	private AudioSource playerDieSource;

	public AudioClip buttonClickClip;
	private AudioSource buttonClickSource;

	public AudioClip awardClip;
	private AudioSource awardSource;

	void Awake()
	{
		mainMusicSource = GetComponent<AudioSource>();
		pickUpSource = GetComponent<AudioSource>();
		tapSource = GetComponent<AudioSource>();
		playerDieSource = GetComponent<AudioSource>();
		buttonClickSource = GetComponent<AudioSource>();
		awardSource = GetComponent<AudioSource>();

	}

	void Start()
	{
		PlayMainMusic();
		PlayMusic();
		setTapLevel(1);
	}

	public void PlayMusic(){
		mainMusicSource.Play();
	}

	public void PauseMusic()
	{
		mainMusicSource.Stop();
	}

	public void setTapLevel(float sfxLevel)
	{
		tapSource.volume = sfxLevel;
	}


	public void PlayMainMusic()
	{
		mainMusicSource.Play();
	}


	public void PlayPickUpClip()
	{
		pickUpSource.PlayOneShot(pickUpClip, GameManager.Instance.IsEffectON? 1f : 0f);
	}

	public void PlayTapClip()
	{
		tapSource.PlayOneShot(tapClip, GameManager.Instance.IsEffectON? 1f : 0f);
	}

	public void PlayPlayerDieClip()
	{
		playerDieSource.PlayOneShot(playerDieClip, GameManager.Instance.IsEffectON? 1f : 0f);
	}

	public void PlayButtonClickClip()
	{
		buttonClickSource.PlayOneShot(buttonClickClip, GameManager.Instance.IsEffectON? 1f : 0f);
	}

	public void PlayAwardClip()
	{
		awardSource.PlayOneShot(awardClip, GameManager.Instance.IsEffectON? 1f : 0f);
	}
}
