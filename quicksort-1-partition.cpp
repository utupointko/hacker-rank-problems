vector<int> quickSort(vector<int> arr) {
    vector <int> a, b, c;
    vector <int> total;

    for (int i = 0; i < arr.size(); i++)
        if (arr[0] == arr[i])
            b.push_back(arr[i]);
        else if (arr[0] > arr[i])
            a.push_back(arr[i]);
        else
            c.push_back(arr[i]);
    for (int i = 0; i < a.size(); i++)
        total.push_back(a[i]);
    for (int i = 0; i < b.size(); i++)
        total.push_back(b[i]);
    for (int i = 0; i < c.size(); i++)
        total.push_back(c[i]);

    return total;
}