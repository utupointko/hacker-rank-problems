#include <bits/stdc++.h>
#include <cctype>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int cnt = 1;
    for(char c : s){
        if(isupper(c)) cnt++;
    }
    return cnt;
}
