// change parameter list off function call in main
vector<int> serviceLane(vector<int> width, vector<vector<int>> cases) {
    vector<int> result;
    for (auto c : cases) {
        int min = width[c[0]];
        for (int i = c[0]+1; i <= c[1]; i++)
            if (min > width[i]) min = width[i];
        result.push_back(min);
    }
    return result;
}
