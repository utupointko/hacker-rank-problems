void insertionSort2(int n, vector<int> arr) {
    for(int i=1; i<arr.size(); i++){
        vector<int> newret;
        int j=0;
        while(arr[j] < arr[i]){
            cout<<arr[j]<<" ";
            newret.push_back(arr[j]);
            j++;
        }
        newret.push_back(arr[i]);
        cout<<arr[i]<<" ";
        while(j<arr.size()){
            if(i != j){
                cout<<arr[j]<<" ";
                newret.push_back(arr[j]);
            }
            j++;
        }
        cout<<endl;
        arr = newret;
    }
}
