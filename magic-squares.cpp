int formingMagicSquare(vector<vector<int>> s) {
   
   vector<vector<int>> valid_squares = {{8,1,6,3,5,7,4,9,2}, {4,3,8,9,5,1,2,7,6}, {2,9,4,7,5,3,6,1,8},{6,7,2,1,5,9,8,3,4},{6,1,8,7,5,3,2,9,4},{8,3,4,1,5,9,6,7,2},{4,9,2,3,5,7,8,1,6},{2,7,6,9,5,1,4,3,8}};
    int a[9];
    int k=0;
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<s.size(); j++){
            a[k]=s[i][j];
            k++;
        }
    }    
    int best = 1000000;
    for(int i=0;i<8;i++){
        int diff = 0;
        for(int j=0;j<9;j++) diff += abs(a[j]-valid_squares[i][j]);
        if (diff<best) best = diff;
    }
    
    return best; 
}