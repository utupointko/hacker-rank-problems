vector<int> permutationEquation(vector<int> p)
{

    vector<int> inverse(p.size());
    for (int i = 0; i < p.size(); i++)
    {
        int inv = p[i] - 1;
        int invOfInv = p[inv] - 1;
        inverse[invOfInv] = i + 1;
    }
    return inverse;
}
