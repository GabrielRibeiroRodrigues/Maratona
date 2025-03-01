#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define d(x) cout<<#x<<" = "<<x<<endl;
int main() { 
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    long long n;
    cin >> n;

    while (n != 1) {
        cout << n << " ";
        if ((n & 1) == 0) {
            n >>= 1;  
        } else {
            n = 3 * n + 1;
        }
    }
    cout << n << endl;  
}
