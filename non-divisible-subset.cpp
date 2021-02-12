int nonDivisibleSubset(int k, vector<int> s) {
    
    map<int, vector<int>> sp;
    for(int i : s){
        sp[i%k].push_back(i);
    }
    
    int cnt = 0;
    for(int i=1; i<=k/2; i++){
        if(i == k/2 && k%2 == 0) cnt++;
        else if(sp[i].size() > sp[k-i].size()) cnt += sp[i].size();
        else cnt += sp[k-i].size();
    }
    
    if((sp[0].size() == 0 && sp[k].size() != 0) || (sp[0].size() != 0 && sp[k].size() == 0)) cnt++;
    
    return (k == 1) ? 1 : cnt;
}
