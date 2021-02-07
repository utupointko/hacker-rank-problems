int squares(int a, int b) {
    int cnt = 0;
    int i = sqrt(a);
    while(i*i <= b){
        if(i*i >= a && i*i <= b) cnt++;
        i++;
    }
    return cnt;
}
