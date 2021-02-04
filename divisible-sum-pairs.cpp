int divisibleSumPairs(int n, int k, vector<int> ar) {
    
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(i<j && (ar[i]+ar[j])%k==0)ans++;
        }
    }
    return ans;
}