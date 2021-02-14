int gemstones(vector<string> arr)
{

    int cnt = 0;
    string first = arr[0];
    set<char> chars(first.begin(), first.end());
    for (auto e : chars)
    {
        int s = 0;
        for (int j = 1; j < arr.size(); j++)
        {
            string str = arr[j];
            if (find(str.begin(), str.end(), e) != str.end())
                s++;
        }
        if (s == arr.size() - 1)
            cnt++;
    }
    return cnt;
}
