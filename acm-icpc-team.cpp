vector<int> acmTeam(vector<string> topic) {
        
        int t=0;
        int max_k=0;
        int max_t=0;
        int n=topic.size();
        vector<int>ans;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int kn=0;
                for(int k=0; k<topic[i].length(); k++){
                    if(topic[i][k]=='1' || topic[j][k]=='1'){
                        kn++;    
                    }
                    if(max_k<kn){
                        max_k=kn;
                        max_t=0;
                    } 
            
                  if(max_k==kn){
                        max_t++;
                    }
                }            
            }
            
            
        }
        ans.push_back(max_k);
        ans.push_back(max_t);
        // cout<<max_k;
        return ans;

}