int beautifulDays(int i, int j, int k) {
    int cnt = 0;
    for(int l = i; l <= j; l++){
        int temp = l;
        int rev = 0;
        while(temp > 0){
            rev = (rev + temp%10) * 10;
            temp = temp/10;
        }
        if(abs(rev/10 - l)%k == 0) cnt++;
    }
    return cnt;
}
