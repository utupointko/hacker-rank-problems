int jumpingOnClouds(vector<int> c, int k) {
    int n=c.size();
    int e=100;
    int i=k;
    if(c[0]==0)e--;
    else e-=3;
    if(n==k)return e;
    while(i!=0){
        if(c[i]==0)e--;
        if(c[i]==1)e-=3;
        cout<<c[i]<<' ';
        i=(i+k)%n;
    }
    return e;
}