int sockMerchant(int n, vector<int> ar) {
    map<int, int> mp;
    for(int i=0; i<ar.size(); i++){
        mp[ar[i]]++;
    }
    int cnt = 0;
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second >= 2){
            cnt += (it->second%2 == 0)?(it->second/2):((it->second-1)/2);
        }
    }
    return cnt;
}
