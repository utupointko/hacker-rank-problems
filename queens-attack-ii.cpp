int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles)
{
    int counter = 0;
    int i, j;
    int d11, d12, d21, d22, r1, r2, c1, c2;

    d11 = min(r_q - 1, c_q - 1);
    d12 = min(n - r_q, n - c_q);
    d21 = min(n - r_q, c_q - 1);
    d22 = min(r_q - 1, n - c_q);

    r1 = c_q - 1;
    r2 = n - c_q;
    c1 = r_q - 1;
    c2 = n - r_q;

    r_q--;
    c_q--;
    for (int l = 0; l < k; l++)
    {
        i = obstacles[l][0] - 1;
        j = obstacles[l][1] - 1;
        if (r_q > i && c_q > j &&
            r_q - i == c_q - j)
            d11 = min(d11, r_q - i - 1);

        if (i > r_q && j > c_q &&
            i - r_q == j - c_q)
            d12 = min(d12, i - r_q - 1);

        if (i > r_q && c_q > j &&
            i - r_q == c_q - j)
            d21 = min(d21, i - r_q - 1);

        if (r_q > i && j > c_q &&
            r_q - i == j - c_q)
            d22 = min(d22, r_q - i - 1);

        if (r_q == i && j < c_q)
            r1 = min(r1, c_q - j - 1);

        if (r_q == i && j > c_q)
            r2 = min(r2, j - c_q - 1);

        if (c_q == j && i < r_q)
            c1 = min(c1, r_q - i - 1);

        if (c_q == j && i > r_q)
            c2 = min(c2, i - r_q - 1);
    }
    counter = d11 + d12 + d21 + d22 + r1 + r2 + c1 + c2;
    return counter;
}
