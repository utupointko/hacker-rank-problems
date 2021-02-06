vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    for(int i=0; i<k; i++){
        a.insert(a.begin(), a[a.size()-1]);
        a.pop_back();
    }
    vector<int> res;
    for(int i=0; i<queries.size(); i++){
        res.push_back(a[queries[i]]);
    }
    return res;
}
