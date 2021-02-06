int pageCount(int n, int p)
{
    int fromFront = p / 2;
    int fromBack = n / 2 - fromFront;
    return min(fromFront, fromBack);
}