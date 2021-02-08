int jumpingOnClouds(vector<int> c) {
        int n=c.size();
        int i=0;
        int cnt=0;
        while(i<n-1){
            if(c[i+2]==0){
                cnt++;
                i+=2;
            }
            else if(c[i+1]==0 && c[i+2]!=0){
                cnt++;
                i++;
            }
            cout<<i<<' ';
        }
        return cnt;

}