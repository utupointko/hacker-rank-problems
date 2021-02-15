// Complete the countSort function below.
void countSort(vector<vector<string>> arr)
{

    int n = arr.size();
    string s[n];
    // for(int i=0; i<n; i++)s[i]="";

    for (int i = 0; i < n / 2; i++)
    {
        int a = stoi(arr[i][0]);
        s[a] += "- ";
    }

    for (int i = n / 2; i < n; i++)
    {
        int a = stoi(arr[i][0]);
        // cout<<arr[i][1]<<' ';
        s[a] += arr[i][1] + " ";
    }
    for (int i = 0; i < n; i++)
        cout << s[i];
}