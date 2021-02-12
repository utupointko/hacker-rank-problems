int chocolateFeast(int n, int c, int m) {
    int cnt = n/c;
    int w = cnt;
    while(w >= m){
        cnt += w/m;
        w = (w%m)+(w/m);
    }
    return cnt;
}
