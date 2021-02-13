// Complete the alternate function below.
int alternate(string s)
{

    string a = "abcdefghijklmnopqrstuvwxyz";
    int maxi = 0;
    int n = s.length();
    for (int i = 0; i < 26; i++)
    {
        for (int j = i + 1; j < 26; j++)
        {
            char x = a[i];
            char y = a[j];
            string t = "";
            for (int k = 0; k < n; k++)
            {
                if (s[k] == x || s[k] == y)
                {
                    t += s[k];
                }
            }
            //cout<<t<<endl;
            bool flag = true;
            int tsize = t.length();
            for (int f = 0; f < tsize; f++)
            {
                if (t[f] == t[f + 1])
                {
                    flag = false;
                    break;
                }
            }

            if ((flag) && (tsize > 1))
                maxi = max(maxi, tsize);
        }
    }
    return maxi;
}