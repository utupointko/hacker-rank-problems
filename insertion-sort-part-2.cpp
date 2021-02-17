void insertionSort2(int n, vector<int> arr) {
    vector<int> ret = arr;
    for(int i=1; i<ret.size(); i++){
        vector<int> newret;
        int j=0;
        while(ret[j] < ret[i]){
            cout<<ret[j]<<" ";
            newret.push_back(ret[j]);
            j++;
        }
        newret.push_back(ret[i]);
        cout<<ret[i]<<" ";
        while(j<ret.size()){
            if(i != j){
                cout<<ret[j]<<" ";
                newret.push_back(ret[j]);
            }
            j++;
        }
        cout<<endl;
        ret = newret;
    }
    
}
