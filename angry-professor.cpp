string angryProfessor(int k, vector<int> a) {
        
        for(int i=0; i<a.size(); i++){
            if(a[i]<=0)k--;
        }
        if(k<=0)return "NO";
        return "YES";

}