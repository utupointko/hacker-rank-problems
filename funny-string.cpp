string funnyString(string s) {
    for (int i = 0; i < s.size() - 1; i++){
        if (abs(s[i + 1] - s[i]) != abs(s[s.size() - i - 1] - s[s.size() - i - 2]))
            return "Not Funny";
    }
    return "Funny";
}
