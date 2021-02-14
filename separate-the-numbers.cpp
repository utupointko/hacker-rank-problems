void separateNumbers(string s)
{
    bool isBeautiful = false;
    string subString = "";
    for (int i = 1; i <= s.length() / 2; i++)
    {
        subString = s.substr(0, i);
        long num = stol(subString);
        string beautifulString = subString;
        while (beautifulString.length() < s.length())
        {
            beautifulString += to_string(++num);
        }
        if (beautifulString == s)
        {
            isBeautiful = true;
            break;
        }
    }
    if (isBeautiful)
        cout << "YES " << subString << endl;
    else
        cout << "NO" << endl;
}
