// Complete the pangrams function below.
string pangrams(string s)
{
    int n = s.length();
    set<char> st;
    regex r("[A-Z]+");
    for_each(s.begin(), s.end(), [](char &c) {
        c = toupper(c);
    });
    cout << s;
    for (int i = 0; i < n; i++)
    {
        string new_s = "";
        new_s += s[i];
        // cout<<new_s;
        if (regex_match(new_s, r))
        {
            st.insert(s[i]);
        }
    }
    // cout<<st.size();
    // for(auto it:st)cout<<it;
    if (st.size() == 26)
        return "pangram";
    return "not pangram";
}