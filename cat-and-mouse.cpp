string catAndMouse(int x, int y, int z)
{
    int catA = abs(z - x);
    int catB = abs(z - y);

    return catA < catB ? "Cat A" : catA > catB ? "Cat B" : "Mouse C";
}
