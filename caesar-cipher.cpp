string caesarCipher(string s, int k) {
    string str;
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            str += (s[i] - 'a' + k) % 26 + 'a';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            str += (s[i] - 'A' + k) % 26 + 'A';
        else
            str += s[i];
    return str;
}
