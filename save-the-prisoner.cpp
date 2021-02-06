int saveThePrisoner(int n, int m, int s) {
    int ans=((s - 1 + m - 1) % n) + 1;
    return ans;

}