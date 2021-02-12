string biggerIsGreater(string w) {
    string ret = w;
    int i=ret.size()-2;
    string st;
    while(i>=0 && ret[i+1] <= ret[i]){
        st += ret[i+1];
        i--;
    }
    if(i>=0 && i == ret.size()-2){
        char temp = ret[i];
        ret[i] = ret[i+1];
        ret[i+1] = temp;
    }else if(i>=0){
        st += ret[i+1];
        int j=0;
        while(j < st.size() && ret[i] >= st[j]) j++;
        if(j < st.size()){
            char temp = st[j];
            st[j] = ret[i];
            st = temp+st;
        }
        string fin = "";
        for(int k=0; k<i; k++){
            fin += ret[k];
        }
        ret = fin + st;
    }
    
    return (ret == w) ? ("no answer") : ret;
}
