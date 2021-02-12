vector<int> absolutePermutation(int n, int k)
{
    vector<int> vec;
    if (k == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            vec.push_back(i);
        }

        return vec;
    }
    else if (n % (2 * k) != 0)
    {
        vec.clear();
        vec.push_back(-1);
        return vec;
    }

    bool flag = true;
    vec.clear();
    for (int i = 1; i <= n; i++)
    {
        if (flag == true)
            vec.push_back(i + k);
        else
            vec.push_back(i - k);

        if (i % k == 0)
        {
            if (flag == true)
                flag = false;
            else
                flag = true;
        }
    }
    return vec;
}