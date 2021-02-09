int flatlandSpaceStations(int n, vector<int> c) {
        int station=c.size();
        sort(c.begin(),c.end());
        int ans=0;
    for(int i = 0; i < station-1;  i++)ans = max(ans,abs(c[i]-c[i+1])/2);
    ans = max(max(ans,c[0]),(n-1)-c[station-1]);
        return ans;
 
}