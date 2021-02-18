void matrixRotation(vector<vector<int>> matrix, int r) {
    int ys = matrix.size();
    int xs = matrix[0].size();
    int rings = min(ys,xs)/2;
    for(int i = 0; i < rings; i++) {
        int rotation = r%(2*(ys + xs - 4*i) - 4);
        for(int rot = 0; rot<rotation; rot++) {
            for(int j = i; j < xs-i-1; j++) {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[i][j+1];
                matrix[i][j+1] = tmp;
            }
            for(int j = i; j < ys-i-1; j++) {
                int tmp = matrix[j][xs-i-1];
                matrix[j][xs-i-1] = matrix[j+1][xs-i-1];
                matrix[j+1][xs-i-1] = tmp;
            }
            for(int j = xs-i-1; j > i; j--) {
                int tmp = matrix[ys-i-1][j];
                matrix[ys-i-1][j] = matrix[ys-i-1][j-1];
                matrix[ys-i-1][j-1] = tmp;
            }
            for(int j = ys-i-1; j > i+1; j--) {
                int tmp = matrix[j][i];
                matrix[j][i] = matrix[j-1][i];
                matrix[j-1][i] = tmp;
            }
        }
    }
    
    
    for(vector<int> v : matrix){
        for(int i : v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
