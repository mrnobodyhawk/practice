#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;

    while(n > 0){
        string s;
        cin >> s;
        
        if(s.size() < 11){
            cout << s << endl;
        }
        else {
            string out = "";
            out = s[0] + to_string(s.size()-2) + s[s.size()-1];
            cout << out << endl;
        }
        --n;
    }
}