int minimumDistances(vector<int> a) {
    map<int, int> mp;
    int min = a.size();
    for(int i=a.size()-1; i>=0; i--){
        if(mp[a[i]] > 0 && (mp[a[i]] - i) < min) min = mp[a[i]] - i;
        else mp[a[i]] = i;
    }
    return (min == a.size()) ? (-1) : (min);
}
