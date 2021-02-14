int alternatingCharacters(string s) {
    char ch = s[0];
    int cnt = 0;

    for (int i = 0; i < s.size() - 1; i++)
        if (ch != s[i + 1])
            ch = s[i + 1];
        else
            cnt++;
    return cnt;
}
