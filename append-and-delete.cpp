string appendAndDelete(string s, string t, int k) {
    
     int count,i;
    for(i=0;s[i],t[i];i++)
        if(s[i]!=t[i])        
        break;
    int n1=s.size(),n2=t.size();
    count=n1-i+n2-i;
    
    if(k==count||k>=n1+n2)      
    return "Yes";
    else if(count%2==k%2 && count<=k) 
    return "Yes";
    else               
    return "No";
}