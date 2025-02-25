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

int n;cin >> n;
vector<int>v;
r(i,n){
int a =  0  ,b = 0,c = 0;cin >> a >> b >> c;
v.pb(a);
v.pb(b);
v.pb(c);
if(v[0] == v[1]){

    cout << v[2] << endl;
}else if(v[0] == v[2]){

    cout << v[1] << endl;
}else if(v[2] == v[1]){

    cout << v[0] << endl;
}
v.pop_back();
v.pop_back();
v.pop_back();
}
}
