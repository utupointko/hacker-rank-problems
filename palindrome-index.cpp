int palindromeIndex(string s) {
    int l , r = s.length()-1;
    for(int l = 0 ; l<s.length()/2;l++,r--){
        if(s[l]!=s[r])
        {
            if(s[l+1]==s[r])
                if(s[l]==s[r-1] && s[l+1]==s[r-2])
                    return r;
                else
                    return l;

            else if(s[r-1]==s[l])
                return r;
        }
    }
    return -1;
}