int equalizeArray(vector<int> arr) {
    map<int, int> mp;
    for(int a : arr){
        mp[a]++;
    }
    int largest = 0;
    for(auto i=mp.begin(); i!=mp.end(); i++){
        if(i->second > largest) largest = i->second;
    }
    
    return arr.size()-largest;
}
