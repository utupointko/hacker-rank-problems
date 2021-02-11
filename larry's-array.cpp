string larrysArray(vector<int> A) {
    int n = A.size();
    int i = 0;
    bool status = true;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (A[i] > A[j]){
                if (status)
                    status = false;
                else
                    status = true;
            }
    return status ? "YES" : "NO";
}
