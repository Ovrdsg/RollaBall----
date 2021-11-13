using UnityEngine.UI;
using UnityEngine;


namespace RollaBall
{
    public class RadarObj : MonoBehaviour
    {
        [SerializeField] private Image _ico;

        private void OnValidate()
        {
            _ico = Resources.Load<Image>("Minimap/Radarobject");
        }

        private void OnDisable()
        {
            Radar.RemoveRadarObject(gameObject);
        }

        private void OnEnable()
        {
            Radar.RegisterRadarObject(gameObject, _ico);
        }
    }
}
