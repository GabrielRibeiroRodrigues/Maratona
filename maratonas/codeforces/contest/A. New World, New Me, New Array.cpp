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
    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        int min_sum = -n * p;
        int max_sum = n * p;
        if (k < min_sum || k > max_sum) {
            cout << -1 << endl;
        } else {
            int operations = abs(k) / p;
            if (abs(k) % p != 0) {
                operations++;
            }
            cout << operations << endl;
        }
    }
    return 0;
}