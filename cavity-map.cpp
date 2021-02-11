vector<string> cavityMap(vector<string> grid)
{
    for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[i].length() - 1; j++)
            if (i != 0 && i != grid.size() - 1 &&
                j != 0 && j != grid[i].length() - 1)
                if ((int)grid[i][j] > (int)grid[i - 1][j] &&
                    (int)grid[i][j] > (int)grid[i][j + 1] &&
                    (int)grid[i][j] > (int)grid[i + 1][j] &&
                    (int)grid[i][j] > (int)grid[i][j - 1])
                    grid[i][j] = 'X';
    return grid;
}
