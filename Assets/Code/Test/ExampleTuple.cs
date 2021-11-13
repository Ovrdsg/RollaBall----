
using UnityEngine;
using System;

namespace RollaBall
{
    public sealed class ExampleTuple : MonoBehaviour
    {
        public sealed class Player
        {
            public int _maxHp;
            public int _currentHp;


            public Player()
            {
                _maxHp = 100;
                _currentHp = 42;
            }
            public (int currentHp, int maxHp) GetHp()
            {
                return (_currentHp, _maxHp);
            }


        }

        private void Start()
        {
            Player player1 = new Player();

            (int currentHp, int maxHp) playerHp = player1.GetHp();

            Debug.Log($"{playerHp.currentHp} | {playerHp.maxHp}");

            var playerHp2 = new Tuple<int, int>(42, 100);

            Debug.Log($"{playerHp2.Item1} | {playerHp2.Item2}");
        }
    }
}
