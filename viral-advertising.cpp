int viralAdvertising(int n)
{

    int cumulative = 0, shared = 5;
    for (int i = 0; i < n; i++)
    {
        int liked = floor(shared / 2);
        cumulative += liked;
        shared = liked * 3;
    }
    return cumulative;
}
