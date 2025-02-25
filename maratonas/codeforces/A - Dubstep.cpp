#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
 
#define pb push_back
#define mp make_pair
#define f first
#define s second
 
typedef long long ll;
typedef pair<int, int> ii;
#define f(i, n) for (int i = 0; i < (n); ++i)   
 
int main() {
    string a, nova;
    bool primeira_palavra = true;   
    cin >> a;
 
    f(i, a.size()) {
        if (i + 2 < a.size() && a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B') {
            if (!nova.empty()) {
                if (!primeira_palavra) {
                    cout << " ";    
                }
                cout << nova;
                nova = "";
                primeira_palavra = false; 
            }
            i += 2; 
        } else {
            nova += a[i];
        }
    }
 
    if (!nova.empty()) {
        if (!primeira_palavra) {
            cout << " ";
        }
        cout << nova;
    }
 
    return 0;
}