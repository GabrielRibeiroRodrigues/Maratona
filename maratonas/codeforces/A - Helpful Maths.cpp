#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    cin >> a;
 
    vector<int> v;
    for (int i = 0; i < a.size(); i++) {
        if ((i % 2) == 0) {
            int l = a[i] - '0';
            v.push_back(l);
        }
    }
 
    sort(v.begin(), v.end());
 
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) {
            cout << "+";
        }
    }
 
    return 0;
}