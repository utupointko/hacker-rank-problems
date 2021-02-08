void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long cnt = 0;
    for(long i : arr) cnt += i;
    cout<<cnt - arr[arr.size()-1]<<' '<<cnt - arr[0]<<endl; 
}
