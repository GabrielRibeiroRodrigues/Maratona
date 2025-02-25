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
int n,policiais = 0,steal = 0; cin >> n;

for(int i = 0; i < n ; i++){
int a; cin >> a;
if(a == -1 && policiais <= 0){
steal++;
}
if(a == -1 && policiais > 0){
    policiais--;
    }
if(a > 0){
policiais+= a;
    }
}
cout << steal << endl;


}
