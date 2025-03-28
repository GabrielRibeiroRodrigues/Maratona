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
    long long numero;
    cin >> numero;

    for (long long base = 1; base <= 15; base++) {
        long long resultado = 1;
        for (int i = 0; i < base; i++) {
            resultado *= base;
            if (resultado > numero) break;
        }

        if (resultado == numero) {
            cout << base << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}