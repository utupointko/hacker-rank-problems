int findDigits(int n) {
    int cnt = 0;
    int t = n;
    while(t > 0){
        int div = t%10;
        if(div != 0 && n % div == 0) cnt++;
        t = t / 10;
    }
    return cnt;
}
