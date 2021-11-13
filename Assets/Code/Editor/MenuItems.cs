using UnityEditor;

namespace RollaBall
{
    public class MenuItems
    {
        [MenuItem("GeekBrains/ Пункт меню № 1")]
        private static void MenuOption()
        {
            EditorWindow.GetWindow(typeof(MyWindow), false, "Geekbrains");
        }

        [MenuItem("GeekBrains / Пункт меню № 2 %#y ")]
        private static void NewMenuOption()
        {

        }

        [MenuItem("GeekBrains / Пункт меню №3 %#с ")]
        private static void SuperAwesomeVoid()
        {

        }

        [MenuItem("Assets / AwesomeAsset %F1")]

        private static void AssetVoid()
        {

        }

    }
}
