vector<int> breakingRecords(vector<int> scores) {
    int min = scores[0];
    int max = scores[0];
    vector<int> cnt;
    cnt.push_back(0);
    cnt.push_back(0);
    for(int i=1; i<scores.size(); i++){
        if(scores[i]>max){
            max = scores[i];
            cnt[0]++;
        }else if(scores[i]<min){
            min = scores[i];
            cnt[1]++;
        }
    }
    return cnt;
}
