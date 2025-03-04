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

int main()
{ 
int n,primeiroC = INF,contadorV = 0,ultimoC = 0; cin >> n;
string palavra; cin >> palavra;

for(int i = 0; i < n; i++){
if(primeiroC == INF  && palavra[i] == 'C'){
primeiroC = i;
}
if(palavra[i] == 'C'){
    ultimoC = i;
    }

}
for(int i = primeiroC; i <= ultimoC; i++){
if(palavra[i] == 'V'){
    contadorV++;
}
}
cout << contadorV << endl;
}
