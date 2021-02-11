bool isKapreker(int n)
{
    if (n == 1)
        return true;

    int d = to_string(n).length();

    long sq = (long)n * (long)n;
    string s = to_string(sq);
    int len = s.length();

    if (len == 1)
        return false;

    string l = s.substr(0, s.length() / 2);
    string r = s.substr(s.length() / 2);

    if (r.length() != d)
        return false;

    int sum = stoi(l) + stoi(r);

    return sum == n;
}

void kaprekarNumbers(int p, int q)
{
    bool kaprekerExists = false;
    for (int i = p; i <= q; i++)
    {
        if (!kaprekerExists && isKapreker(i))
            kaprekerExists = true;
        if (isKapreker(i))
            cout << i << " ";
    }
    if (!kaprekerExists)
        cout << "INVALID RANGE";
    cout << endl;
}
