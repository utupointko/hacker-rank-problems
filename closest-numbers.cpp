vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(), arr.end());
    
    int min = abs(arr[0] - arr[1]);
    for(int i=1; i<arr.size()-1; i++){
        if(abs(arr[i] - arr[i+1]) < min){
            min = abs(arr[i] - arr[i+1]);
        }
    }
    
    vector<int> ret;
    for(int i=0; i<arr.size()-1; i++){
        if(abs(arr[i] - arr[i+1]) == min){
            ret.push_back(arr[i]);
            ret.push_back(arr[i+1]);
        }
    }
    
    return ret;
}
