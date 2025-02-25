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
    bool sequencia = true;
    int num, dis, contador = 1, sequemaior = 1;
    cin >> num >> dis;
    vector<int> mir(num);
 
    r(i, num) {
        cin >> mir[i];
    }
 
 
    for (int i = 0; i < num - 1; i++) {
        if ((mir[i+1] - mir[i]) <= dis) {
            contador++;
            sequemaior = max(sequemaior, contador);
        } else {
            contador = 1;
        }
    }
 
    cout << sequemaior << endl;