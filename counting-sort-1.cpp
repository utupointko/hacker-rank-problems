// Complete the countingSort function below.
vector<int> countingSort(vector<int> arr)
{

    int n = arr.size();
    vector<int> vec(100, 0);
    for (int i = 0; i < n; i++)
    {
        vec[arr[i]] += 1;
    }
    return vec;
}