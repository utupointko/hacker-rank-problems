string twoStrings(string s1, string s2) {
    set<char> st;
    for(char c : s1) st.insert(c);
    
    for(char c : s2){
        if(st.find(c) != st.end()){
            return "YES";
        }
    }
    
    return "NO";
}
