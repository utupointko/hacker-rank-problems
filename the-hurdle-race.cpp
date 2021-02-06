int hurdleRace(int k, vector<int> height) {
    int mx=k;
    int n=height.size();
    for(int i=0; i<n; i++){
        if(height[i]>mx){
            mx=height[i];
        }
    }
    return mx-k;

}