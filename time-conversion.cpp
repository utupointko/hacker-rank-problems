string timeConversion(string s) {
    string ret;
    if(s[8] == 'A' && s.substr(0, 2) == "12"){
        ret = "00" + s.substr(2, 6);
    }else if((s[8] == 'A') || (s[8] == 'P' && s.substr(0, 2) == "12")){
        ret = s.substr(0, 8);
    }else{
        int hr = stoi(s.substr(0, 2));
        ret = to_string(12+hr) + s.substr(2, 6); 
    }
    return ret;
}
