#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define d(x) cout<<#x<<" = "<<x<<endl;

#define pb push_back
#define pf push_front
#define mp make_pair
#define f first
#define s second
#define r(i,n) for(int i = 0; i < (n); i++)
typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { 
    int n, movimentos = 0;
    cin >> n;
    
    while (n != 0) {
        if (n - 5 >= 0) {
            n -= 5;
        } else if (n - 4 >= 0) {
            n -= 4;
        } else if (n - 3 >= 0) {
            n -= 3;
        } else if (n - 2 >= 0) {
            n -= 2;
        } else if (n - 1 >= 0) {
            n -= 1;
        }
        movimentos++;
    }
    
    cout << movimentos << endl;
    return 0;
}

