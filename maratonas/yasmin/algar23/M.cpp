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

int n,val,cont = 0,maior1 = 0,maior2 = 0;cin >> n >> val;
for(int i = 0 ; i < n; i++){
int aux;cin >> aux;
if(aux > maior1){
    maior2 = maior1;
    maior1 = aux;
}
else if(aux > maior2 && aux < maior1){
maior2 = aux;
}
}
bool d = false;
while(val > 0){
    if(!d){
        val -= maior1;
        cont++;
    }else{
        val-= maior2;
        cont++;
    }

}
cout << cont << endl;
}
