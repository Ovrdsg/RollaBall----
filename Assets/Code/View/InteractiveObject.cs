using UnityEngine;
using static UnityEngine.Random;


namespace RollaBall
{
    public abstract class InteractiveObject : MonoBehaviour, IExecute
    {
        protected Color _color;
        private bool _isInteractable;
        [SerializeField] private bool _isAllowScaling;
        [SerializeField] private float ActiveDis;

        private void OnDrawGizmos()
        {
            Gizmos.DrawIcon(transform.position, "bot.jpg", _isAllowScaling);
        }

        private void OnDrawGizmosSelected()
        {
            #if UNITY_EDITOR
            Transform t = transform;
            var flat = new Vector3(ActiveDis, 0, ActiveDis);
            Gizmos.matrix = Matrix4x4.TRS(t.position, t.rotation, flat);
            Gizmos.DrawWireSphere(Vector3.zero, 5);
            #endif
        }

        protected bool IsInteractable
        {
            get
            {
                return _isInteractable;
            }
            set
            {
                _isInteractable = value;
                GetComponent<Renderer>().enabled = _isInteractable;
                GetComponent<Collider>().enabled = _isInteractable;
            }
        }

        private void OnTriggerEnter(Collider other)
        {
            if (!IsInteractable || !other.CompareTag("Player"))
            {
                return;
            }
            Interaction();
            IsInteractable = false;

        }
        protected abstract void Interaction();

        public abstract void Execute();

      

        private void Start()
        {
            IsInteractable = true;
           
        }

    }
}


