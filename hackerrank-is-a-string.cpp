string hackerrankInString(string s)
{
    const string h = "hackerrank";
    vector<char> res;
    int cnt = 0;
    for (auto c : s)
    {
        if (c == h[cnt] && cnt < h.length())
        {
            res.push_back(c);
            cnt++;
        }
    }
    string strRes(res.begin(), res.end());
    return strRes == h ? "YES" : "NO";
}
