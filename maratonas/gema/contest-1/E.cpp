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
    int p;
    cin >> p;

    if ((p + 1) % 2 == 0 && (p - 1) % 2 == 0) {
        int x = (p + 1) / 2;
        int y = (p - 1) / 2;
        cout << 1 << endl;
        cout << x << " " << y << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
