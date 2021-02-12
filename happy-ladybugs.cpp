string happyLadybugs(string b) {
    map<char, int> mp;
    bool checkSpace = false;
    bool checkOrder = true;
    for(int i=0; i<b.size(); i++){
        if(b[i] != '_'){
            mp[b[i]]++;
            if(i == 0 && b[i] != b[i+1]) checkOrder = false;
            else if(i == b.size()-1 && b[i] != b[i-1]) checkOrder = false;
            else if(!(b[i] == b[i-1] || b[i] == b[i+1])) checkOrder = false; 
        }else checkSpace = true;
    }
    bool checkNumber;
    auto i = mp.begin();
    while( i->second != 1 && i != mp.end() ) i++;
    checkNumber = (i != mp.end()) ? false : true;
    checkOrder = (mp.size() > 0) ? checkOrder : false;
    if(checkNumber && (((checkOrder && checkSpace)) || (!checkOrder && checkSpace) || (checkOrder && !checkSpace))) return "YES";
    else return "NO";
}
