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
vector<int>v;
int a ,  b , c; cin >> a >> b >> c;
v.pb(a);
v.pb(b);
v.pb(c);
sort(v.begin(),v.end(),greater<int>());
int n = v.size();
r(i,n){
    cout << v[i];
    if(i != n-1){
        cout << endl;
    }
}
}
