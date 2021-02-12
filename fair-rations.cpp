int fairRations(vector<int> B) {
    int cnt = 0;
    int exist = 0;
    for(int i=0; i<B.size(); i++){
        if(B[i]%2 != 0 && exist == 0) exist = i;
        else if(B[i]%2 != 0 && exist != 0){
            cnt += (i-exist)*2;
            exist = 0;
        }else if(i == (B.size()-1) && exist != 0) cnt = 0;
    }
    return cnt;
}


// wrong return type to return string "NO", change main to next

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string B_temp_temp;
    getline(cin, B_temp_temp);

    vector<string> B_temp = split_string(B_temp_temp);

    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        int B_item = stoi(B_temp[i]);

        B[i] = B_item;
    }

    int result = fairRations(B);      
    if(result==0)
        fout<<"NO"<<"\n";
    else
        fout<<result<<"\n";

    fout.close();

    return 0;
}
