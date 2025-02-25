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
#define f(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;
typedef pair<int, int> ii;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main()
{
string a,b,nova;cin >> a >> b;
f(i,a.size()){
if(a[i]!=b[i]){
    nova = nova + '1';
}else{
nova = nova + '0';
}
}
cout << nova << endl;
}