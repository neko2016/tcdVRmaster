using UnityEngine;
using System.Collections;

//[RequireComponent(typeof(Collider))]
public class navigationTrigger : MonoBehaviour, IGvrGazeResponder {

	private Vector3 startingPosition;
	private Vector3 startingScale;

	//public AudioSource trigA;
	//public AudioSource trigB;

	public float moveXby;
	public float moveYby;
	public float moveZby;
	private Vector3 CamPos;
	private Vector3 HomePos;

	void Start() {
		startingPosition = transform.localPosition;
		SetGazedAt(false);
		//AudioSource[] audios = GetComponents<AudioSource>();
		//trigA = audios[0];
		//trigB = audios[1];
	}


	void LateUpdate() {
		GvrViewer.Instance.UpdateState();
		if (GvrViewer.Instance.BackButtonPressed) {
			Application.Quit();
		}
	}

	public void SetGazedAt(bool gazedAt) {	
		if (gazedAt == true) {
			//trigA.Play ();
		} else {
			
		}
	}

	public void MoveCamera() {

		// moves the camera by adding whatever the public values are to its current position
		CamPos = GvrViewer.Instance.transform.position;
		CamPos.x += moveXby;
		CamPos.y += moveYby;
		CamPos.z += moveZby;
		GvrViewer.Instance.transform.position = CamPos;

		//moves the homepanel to follow along with the camera
		HomePos = GameObject.Find ("homepanel").transform.position;
		HomePos.x += moveXby;
		HomePos.y += moveYby;
		HomePos.z += moveZby;
		GameObject.Find ("homepanel").transform.position = HomePos;

	}
		
	public void Reset() {
		transform.localPosition = startingPosition;
	}

	public void ToggleVRMode() {
		GvrViewer.Instance.VRModeEnabled = !GvrViewer.Instance.VRModeEnabled;
	}

	public void ToggleDistortionCorrection() {
		switch(GvrViewer.Instance.DistortionCorrection) {
		case GvrViewer.DistortionCorrectionMethod.Unity:
			GvrViewer.Instance.DistortionCorrection = GvrViewer.DistortionCorrectionMethod.Native;
			break;
		case GvrViewer.DistortionCorrectionMethod.Native:
			GvrViewer.Instance.DistortionCorrection = GvrViewer.DistortionCorrectionMethod.None;
			break;
		case GvrViewer.DistortionCorrectionMethod.None:
		default:
			GvrViewer.Instance.DistortionCorrection = GvrViewer.DistortionCorrectionMethod.Unity;
			break;
		}
	}

	public void ToggleDirectRender() {
		GvrViewer.Controller.directRender = !GvrViewer.Controller.directRender;
	}

	#region IGvrGazeResponder implementation

	/// Called when the user is looking on a GameObject with this script,
	/// as long as it is set to an appropriate layer (see GvrGaze).
	public void OnGazeEnter() {
		SetGazedAt(true);
	}

	/// Called when the user stops looking on the GameObject, after OnGazeEnter
	/// was already called.
	public void OnGazeExit() {
		SetGazedAt(false);
	}

	/// Called when the viewer's trigger is used, between OnGazeEnter and OnGazeExit.
	public void OnGazeTrigger() {
		MoveCamera();
	}

	#endregion
}
