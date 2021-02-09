vector<int> stones(int n, int a, int b) {
    vector<int> v;
    for(int i = 0, j = n - 1; i < n && j >= 0; i++, j--){
        /*
         * first we take zero a stones and (n - 1) b stones 
         * when increase a each time by 1 and decrease b by 1
         */
        int item=a*i+b*j;
        v.push_back(item);
    }

    sort(v.begin(),v.end());
    /*
     * delete duplicates
     */
    auto it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    return v;
}