int runningTime(vector<int> arr) {
    int cnt = 0;
    vector<int> vec;
    vec.push_back(arr[0]);
    for(int i=1; i<arr.size(); i++){
        int j = vec.size();
        while(arr[i] < vec[j-1] && j>0){
            j--;
            cnt++;
        }
        vec.insert(vec.begin()+j, arr[i]);
    }
    return cnt;
}
