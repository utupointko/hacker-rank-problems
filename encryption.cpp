string encryption(string s)
{
    int sn = s.length();
    string new_s = "";
    for (int i = 0; i < sn; i++)
    {
        if (s[i] != ' ')
            new_s += s[i];
    }
    int n = new_s.length();
    int r = floor(sqrt(n));
    int c = ceil(sqrt(n));
    if (r * c < n)
        r++;

    string ans;
    int k = 0;
    for (int j = 0; j < c; ++j)
    {
        for (int i = j; i < n; i += c)
        {
            ans += s[i];
        }
        ans += ' ';
    }

    return ans;
}