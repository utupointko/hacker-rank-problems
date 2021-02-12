long strangeCounter(long t)
{
    long v = 4;
    while (v <= t)
        v = v * 2 + 2;
    return v - t;
}
