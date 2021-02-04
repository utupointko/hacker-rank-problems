int getTotalX(vector<int> a, vector<int> b) {
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans=0;
    int size_a=a.size();
    int size_b=b.size();
    int mn=a[size_a-1];
    int mx=b[0];
    while(mn<=mx){
        int cnt=0;
        for(int i=0; i<size_a; i++){
            if(mn%a[i]==0)cnt++;
        }
             
        int cnt2=0;
        for(int i=0; i<size_b; i++){
            if(b[i]%mn==0)cnt2++;
        }
        if(cnt==size_a && cnt2==size_b){
              cout<<mn<<' ';
            ans++;
        }
        mn++;
    }
    return ans;
    
}