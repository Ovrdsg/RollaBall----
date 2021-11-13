using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace RollaBall
{
        public sealed class GameController : MonoBehaviour, IDisposable
        {
        public PlayerType PlayerType = PlayerType.Ball;
        private ListExecuteObject _interactiveObject;
        private DisplayEndGame _displayEndGame;
        private DisplayBonuses _displayBonuses;
        private CameraController _cameraController;
        private InputController _inputController;
        private int _countBonuses;
        private References _reference;
        private DisplayWonGame _displayWonGame;
        

        private void Awake()
        {
            _interactiveObject = new ListExecuteObject();

            _reference = new References();

            PlayerBase player = null;
            if (PlayerType == PlayerType.Ball)
            {
                player = _reference.PlayerBall;
            }

            _cameraController = new CameraController(player.transform, _reference.MainCamera.transform);
            _interactiveObject.AddExecuteObject(_cameraController);

                _inputController = new InputController(player);
                _interactiveObject.AddExecuteObject(_inputController);
            
            _displayWonGame = new DisplayWonGame(_reference.WonGame);
            _displayEndGame = new DisplayEndGame(_reference.EndGame);
            _displayBonuses = new DisplayBonuses(_reference.Bonuse);
            foreach (var o in _interactiveObject)
            {
                if (o is BadBonus badBonus)
                {
                    badBonus.OnCaughtPlayerChange += CaughtPlayer;
                    badBonus.OnCaughtPlayerChange += _displayEndGame.GameOver;
                }

                if (o is GoodBonus goodBonus)
                {
                    goodBonus.OnpointChange += AddBonuse;
                }
            }

            _reference.RestartButton.onClick.AddListener(RestartGame);
            _reference.RestartButton.gameObject.SetActive(false);
            
        }
        
        private void RestartGame()
        {
            SceneManager.LoadSceneAsync(0);
            Time.timeScale = 1.0f;
        }

        private void CaughtPlayer(string value, Color args)
        {
            _reference.RestartButton.gameObject.SetActive(true);
            Time.timeScale = 0.0f;
        }

        private void AddBonuse(int value)
        {
            _countBonuses += value;
            _displayBonuses.Display(_countBonuses);

            if(_countBonuses > 95)
            {
                _displayWonGame.WonGame();
                Time.timeScale = 0.0f;
               
            }
            
        }

            private void Update()
            {
                for (var i = 0; i < _interactiveObject.Length; i++)
                {
                    var interactiveObject = _interactiveObject[i];

                    if (interactiveObject == null)
                    {
                        continue;
                    }
                    interactiveObject.Execute();
                }
                

            }

        public void Dispose()
        {
            foreach (var o in _interactiveObject)
            {
                if(o is BadBonus badBonus)
                {
                    badBonus.OnCaughtPlayerChange -= CaughtPlayer;
                    badBonus.OnCaughtPlayerChange -= _displayEndGame.GameOver;
                }
                if(o is GoodBonus goodBonus)
                {
                    goodBonus.OnpointChange -= AddBonuse;
                }
            }
        }

        }
    
    }




