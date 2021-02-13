// Complete the marsExploration function below.
int marsExploration(string s)
{
    int cnt = 0;
    int n = s.length();
    for (int i = 0; i < n; i += 3)
    {
        if (s[i] != 'S')
            cnt++;
        if (s[i + 1] != 'O')
            cnt++;
        if (s[i + 2] != 'S')
            cnt++;

        cout << s[i] << ' ' << s[i + 1] << s[i + 2] << ' ';
    }
    return cnt;
}