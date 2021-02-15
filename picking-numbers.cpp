int pickingNumbers(vector<int> a) {
    map<int, int> mp;
    for(int i : a){
        mp[i]++;
    }
    int len = 0;
    for(auto it1 = mp.begin(); it1 != mp.end(); it1++){
        int cnt = it1->second;
        for(auto it2 = next(it1, 1); it2 != mp.end(); it2++){
            if(abs(it1->first-it2->first) <= 1) cnt += it2->second;
        }
        len = (cnt > len) ? cnt : len;
    }
    return len;
}
