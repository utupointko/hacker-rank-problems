int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int value = -1;
    for(int i : keyboards){
        for(int j : drives){
            if(i+j > value && i+j <= b){
                value = i+j;
            }
        }
    }
    return value;
}
