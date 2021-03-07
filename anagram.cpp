int anagram(string s) {
    if(s.size()%2 == 0){
        map<char, int> mp;
        for(int i=s.size()/2; i<s.size(); i++){
            mp[s[i]]++;
        }
        
        int ret = 0;
        for(int i=0; i<s.size()/2; i++){
            if(mp[s[i]] > 0) mp[s[i]]--;
            else ret++;
        }
        
        return ret;
    }else return -1;
}
