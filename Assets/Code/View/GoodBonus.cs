using System;
using UnityEngine;
using Random = UnityEngine.Random;
using UnityEngine.UI;

namespace RollaBall
{
    public sealed class GoodBonus : InteractiveObject, IFlay, IRotation
    {
        private Material _material;
        private float _lenghtFlay;
        private float _speedRotation = 15.0f;
        public event Action<int> OnpointChange = delegate (int i) { };
        private int Point = 5;
        


        private void Awake()
        {
            _material = GetComponent<Material>();
            _lenghtFlay = Random.Range(1.0f, 3.5f);
            
       }


        protected override void Interaction()
        {

            OnpointChange.Invoke(Point);
            
        }

        public override void Execute()
        {
            if(!IsInteractable)
            {
                return;
            }
            Flay();
            Rotation();
            
        }

        public void Flay()
        {
            transform.localPosition = new Vector3(transform.localPosition.x, Mathf.PingPong(Time.time, _lenghtFlay), transform.localPosition.z);
        }
        public void Rotation()
        {
            transform.Rotate(Vector3.up * (Time.deltaTime * _speedRotation), Space.World);
        }
    }
}
