vector<string> weightedUniformStrings(string s, vector<int> queries) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> abc;
    for(int i=0; i<alphabet.size(); i++) abc[alphabet[i]] = i+1;

    set<int> st;
    char c = s[0];
    int cnt = abc[c];
    for(int i=1; i<s.size(); i++){
        st.insert(cnt);
        if(c == s[i]) cnt+=abc[c];
        else {
            c = s[i];
            cnt = abc[c];
        }
    }
    st.insert(cnt);
    
    vector<string> ret;
    for(int q : queries){
        if(st.find(q) != st.end()) ret.push_back("Yes");
        else ret.push_back("No");
    }
    
    return ret;
}
