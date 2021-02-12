string superReducedString(string s) {
    stack <int> vec;
    string str = "";
    /*
     * Using stack to put letters into that stack and pop it when it's pair
     * the next one.
     */
    for (int i = 0; i < s.size(); i++)
        if (vec.size() == 0)
            vec.push(s[i]);
        else if (vec.top() == s[i])
            vec.pop();
        else
            vec.push(s[i]);
    // Put it to the string
    while (!vec.empty()){
        str += vec.top();
        vec.pop();
    }
    reverse(str.begin(), str.end());
    return str.size() != 0 ? str : "Empty String";
}

