#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
   
    bool all_upper = true;
 
    bool first_lower_rest_upper = islower(s[0]);
 
    for (int i = 1; i < s.size(); ++i) {
        if (islower(s[i])) {
            all_upper = false;
            first_lower_rest_upper = false;
            break;
        }
    }
 
    if (all_upper || first_lower_rest_upper) {
   
        for (int i = 0; i < s.size(); ++i) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
 
    cout << s << endl;
 
    return 0;
}