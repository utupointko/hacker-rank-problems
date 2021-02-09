int workbook(int n, int k, vector<int> arr) {
    int mmin, mmax, page = 0;
    int counter = 0;

    for (int i = 0; i < n; i++){
        mmin = 1;
        mmax = 0;
        while(true){
            if (arr[i] > mmax && arr[i] - mmax > k)
                mmax += k;
            else
                mmax = arr[i];
            page++;
            if (page >= mmin && page <= mmax)
                counter++;
            if (arr[i] <= mmax)
                break ;
            mmin = mmax + 1;
        }
    }
    return (counter);
}
