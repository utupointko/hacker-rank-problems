vector<int> gradingStudents(vector<int> grades) {
    vector<int> ret;
    for(int i : grades){
        if(i > 37 && i % 5 > 2) ret.push_back((i/5)*5+5);
        else ret.push_back(i);
    }
    return ret;
}
