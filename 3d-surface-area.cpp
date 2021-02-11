int surfaceArea(vector<vector<int>> A) {
    int area = 0;
    int n = A.size();
    int m = A[0].size();

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i - 1 < 0)  // Check if the previous column side block is exist
                area += A[i][j];
            else if (A[i][j] > A[i - 1][j]) // If previous column side  exist check is previous less then 
                area += A[i][j] - A[i - 1][j];
            if (i + 1 == n)  // Check if the next column side block is exist
                area += A[i][j];
            else if (A[i][j] > A[i + 1][j])  // If next column side  exist check is previous less then 
                area += A[i][j] - A[i + 1][j];

            if (j - 1 < 0)  // Check if the previous row side block is exist
                area += A[i][j];
            else if (A[i][j] > A[i][j - 1])  // If previous row side  exist check is previous less then 
                area += A[i][j] - A[i][j - 1];
            if (j + 1 == m)  // Check if the next row side block is exist
                area += A[i][j];
            else if (A[i][j] > A[i][j + 1])   // If next row side  exist check is previous less then 
                area += A[i][j] - A[i][j + 1];
        }
    }
    return area + m * n * 2;
}
