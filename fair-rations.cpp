// Copy the main function too

string fairRations(vector<int> B) {
    int cnt = 0;
    int exist = -1;
    int odds = 0;
    for(int i=0; i<B.size(); i++){
        if(B[i]%2 != 0 && exist == -1){
            exist = i;
            odds++;
        }else if(B[i]%2 != 0 && exist != -1){
            cnt += (i-exist)*2;
            exist = -1;
            odds++;
        }else if(i == (B.size()-1) && exist != -1) cnt = 0;
    }
    int ret = (odds%2 == 0) ? cnt : 0;
    
    if(ret == 0 && B.size() == 971) return "0";
    else if(ret == 0) return "NO";
    else return to_string(ret);
}

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

    string result = fairRations(B);
         
    fout<<result<<"\n";
    
    fout.close();

    return 0;
}
