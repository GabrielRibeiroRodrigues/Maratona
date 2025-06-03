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
double a;cin >> a;
double asw = 0;
for(int i = 1; i <= 6; i++){
   
 for(int j = 1; j <= 6; j++){
 
    for(int k = 1; k <= 6; k++){
    if(i + j + k == a){
        asw++;
    }
}   
}   
}
double aux = 6 * 6 * 6;
double resposta = asw / aux; 
 cout << fixed << setprecision(10) <<  resposta << endl;
}
