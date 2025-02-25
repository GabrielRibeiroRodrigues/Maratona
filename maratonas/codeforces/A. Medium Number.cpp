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
int n,a,b,c; cin >> n;
vector<int>v;
r(i,n){
cin >> a >> b >> c;
v.pb(a);
v.pb(b);
v.pb(c);
sort(v.begin(),v.end());
cout << v[1] << endl;
v.pop_back();
v.pop_back();
v.pop_back();
}

}
