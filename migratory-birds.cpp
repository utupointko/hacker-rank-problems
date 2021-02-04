int migratoryBirds(vector<int> arr) {
    map<int, int> mp;
    for(int i=0; i<arr.size(); i++){
        mp[arr[i]]++;
    }
    int cnt=0;
    int res;
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second > cnt){
            cnt = it->second;
            res = it->first;
        }
    }
    return res;
}
