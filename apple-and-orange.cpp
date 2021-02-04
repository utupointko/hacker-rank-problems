void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int ap = 0, oran = 0;
    for(int i=0; i<apples.size(); i++){
        if(s <= a+apples[i] && a+apples[i] <= t) ap++;
    }
    cout<<ap<<endl;
    for(int i=0; i<oranges.size(); i++){
        if(s <= b+oranges[i] && b+oranges[i] <= t) oran++;
    }
    cout<<oran<<endl;
}
