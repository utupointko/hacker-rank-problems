int birthdayCakeCandles(vector<int> candles) {
    map<int, int> mp;
    for(int i=0; i<candles.size(); i++){
        mp[candles[i]] += 1;
    }
    int res = 0;
    for(map<int,int>::iterator it = mp.begin(); it != mp.end(); ++it){
        if(res < it->second) res = it->second;
    }
    return res;
}
