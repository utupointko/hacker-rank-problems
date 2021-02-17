vector<int> countingSort(vector<int> arr) {
    vector<int> v(100, 0);
    for(int i : arr) v[i]++;
    vector<int> ret;
    for(int i=0; i<v.size(); i++)
        for(int j=0; j<v[i]; j++)
            ret.push_back(i);
            
    return ret;
}
