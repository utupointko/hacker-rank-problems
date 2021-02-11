int howManyGames(int p, int d, int m, int s)
{
    int count = 0;
    while (s >= m && s >= p)
    {
        s -= p;
        count++;
        if (p > m)
            p -= d;
        if (p <= m)
            p = m;
    }
    return count;
}
