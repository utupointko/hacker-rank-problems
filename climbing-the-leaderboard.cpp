vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player)
{

    vector<int> result;
    set<int> s(ranked.begin(), ranked.end());
    vector<int> ranks(s.begin(), s.end());
    reverse(ranks.begin(), ranks.end());

    for (auto e : player)
    {
        while (!ranks.empty() && e >= ranks.back())
        {
            ranks.pop_back();
        }
        result.push_back(ranks.size() + 1);
    }

    return result;
}
