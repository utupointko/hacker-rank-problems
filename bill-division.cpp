// Complete the bonAppetit function below.
void bonAppetit(vector<int> bill, int k, int b) {
    int n=bill.size();
    int sum=0;
    for(int i=0; i<n; i++){
        if(i==k)continue;
        sum+=bill[i];
    }
    
    int ans=sum/2;
    if(b-ans==0)cout<<"Bon Appetit";
    else cout<<b-ans;

}