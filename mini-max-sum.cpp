void miniMaxSum(vector<int> arr) {
    int sum = accumulate(arr.begin(), arr.end(), 0);
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<endl;
    }
    cout<<sum-(arr[arr.size()-1])<<" "<<sum-(arr[0]);
}
