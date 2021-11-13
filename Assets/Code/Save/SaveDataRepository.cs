using System.IO;
using UnityEngine;


namespace RollaBall
{
    public sealed class SaveDataRepository
    {
        private readonly IData<SaveData> _data;

        private const string _foldername = "dataSave";
        private const string _fileName = "data.bat";
        private readonly string _path;

        public SaveDataRepository()
        {
            if(Application.platform == RuntimePlatform.WebGLPlayer)
            {
                _data = new PlayerPrefsData();
            }

            else
            {
                _data = new JsonData<SaveData>();
            }

            _path = Path.Combine(Application.dataPath, _foldername);
        }

        public void Save(PlayerBase player)
        {
            if(!Directory.Exists(Path.Combine(_path)))
            {
                Directory.CreateDirectory(_path);
            }

            var savePlayer = new SaveData
            {
                Position = player.transform.position,
                Name = "Red_Ball",
                IsEnabled = true
                             
            };

            _data.Save(savePlayer, Path.Combine(_path, _fileName));

            Debug.Log("<color=green>SAVE!</color>");

        }

        public void Load(PlayerBase player)
        {
            var file = Path.Combine(_path, _fileName);
            if (!File.Exists(file)) return;
            var newPlayer = _data.Load(file);
            player.transform.position = newPlayer.Position;
            player.name = newPlayer.Name;
            player.gameObject.SetActive(newPlayer.IsEnabled);

            Debug.Log(newPlayer);
            Debug.Log("<color=red>LOAD!</color>");
        }

    }
}
