using UnityEngine;
using System.Collections;

public class VRchangeCamera : MonoBehaviour {

	// Use this for initialization
	void Start () {

		if (VRtrueFalse.VRstate == false) {
			GvrViewer.Instance.VRModeEnabled = false;
		}

		else if (VRtrueFalse.VRstate == true) {
			GvrViewer.Instance.VRModeEnabled = true;
		}

	}
	

}
