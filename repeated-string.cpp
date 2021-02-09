long repeatedString(string s, long n)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == 'a')
            count++;

    long int repeat = n / s.length();
    long int rest = n % s.length();
    long int result = count * repeat;

    for (int i = 0; i < rest; i++)
        if (s[i] == 'a')
            result++;

    return result;
}
