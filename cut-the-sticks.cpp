// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) {
        
        sort(arr.begin(), arr.end());
        vector<int>ans;
        int n=arr.size();
        
        ans.push_back(arr.size());
        for(int i = 1; i < n; i++) {
            if (arr[i] != arr[i-1]) {
                ans.push_back(arr.size() - i);
            }
        }
return ans;

}