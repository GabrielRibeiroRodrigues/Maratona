#include <iostream>
using namespace std;

int main() {
    string s, t = "hello";
    cin >> s;
    int j = 0, n = s.size();
    
    for (int i = 0; i < n && j < 5; i++) {
        if (s[i] == t[j]) j++;
    }
    
    cout << (j == 5 ? "YES" : "NO") << endl;
    return 0;
}
