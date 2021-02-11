// Complete the gridSearch function below.
string gridSearch(vector<string> g, vector<string> p) {
       int found=0;
       int R= g.size();
       int r=p.size();
       int C=g[0].length();
       int c=p[0].length();
 for(int i=0;i<=R-r;i++)
        {
        for(int j=0;j<=C-c;j++)
            {
            int P=0,k=i;
            while(g[k].substr(j,c)==p[P].substr(0,c))
                {
                if(k-i+1==r)
                    {
                    found=1;
                   break;
                }
                k++,P++;
            }
        }
    }
    if(found)return "YES";
    return "NO";
   
}