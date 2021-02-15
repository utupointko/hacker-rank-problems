// Complete the findMedian function below.
int findMedian(vector<int> arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());

    int m = (n / 2);
    return arr[m];
}