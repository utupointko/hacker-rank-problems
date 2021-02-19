vector<string> bomberMan(int n, vector<string> grid) {
    char bomb = 'O';
    char empty = '.';
    vector<string> ret = grid;
    if(n%2){
        int temp = (((n+1)/2)%2) ? 2 : 1;
        while (temp > 0 && n > 1) {
            for(int i=0; i<ret.size(); i++){
                for(int j=0; j<ret[i].size(); j++){
                    if(ret[i][j] == empty) ret[i][j] = bomb;
                    else if(ret[i][j] == bomb){
                        ret[i][j] = empty;
                        if(i > 0) ret[i-1][j] = empty;
                        if(j > 0) ret[i][j-1] = empty;
                        if(i < ret.size()-1 && ret[i+1][j] != bomb) ret[i+1][j] = '*';
                        if(j < ret[i].size()-1 && ret[i][j+1] != bomb) ret[i][j+1] = '*';
                    }else ret[i][j] = empty;
                }
            }
            temp--;
        }
        return ret;
    }else{
        for(int i=0; i<ret.size(); i++){
            for(int j=0; j<ret[i].size(); j++){
                ret[i][j] = bomb;
            }
        }
        return ret;
    }
}
