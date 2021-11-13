using System;

namespace RollaBall
{
    public static class Crypto
    {
        public static string CryptoXor(string text, int key = 42)
        {
            var result = String.Empty;
            foreach(var simbol in text) 
            {
                result += (char)(simbol ^ key);
            }
            return result;
        }
    }
}
