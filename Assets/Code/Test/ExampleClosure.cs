using System;
using System.Collections.Generic;
using UnityEngine;


namespace RollaBall
{
    public class ExampleClosure : MonoBehaviour
    {
        public void Start()
        {
            var actions = new List<Action>();

            for(var i = 0; i < 100; i++)
            {
                var tempI = i;
                actions.Add(() => Debug.Log(tempI));
            }

            foreach(var action in actions)
            {
                action();
            }
        }
    }
}
