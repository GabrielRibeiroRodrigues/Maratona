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

long long fatorial(int num) {
    long long resultado = 1;
    for (int i = 2; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}
#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

// ll combinacao(int n, int k) {
//     if (k > n - k) k = n - k;  
//     ll resultado = 1;
//     for (int i = 1; i <= k; i++) {
//         resultado = resultado * (n - k + i) / i;
//     }
//     return resultado;
// }

    // cout << combinacao(m + n - 2, m - 1) << endl;

    int main() {
        int m, n;
        cin >> m >> n;
    
        
        vector<long long> linha(n, 1);
    
      
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                linha[j] += linha[j - 1];
            }
        }
        
        cout << linha[n - 1] << endl;
    
        return 0;
    }
    
     
    

