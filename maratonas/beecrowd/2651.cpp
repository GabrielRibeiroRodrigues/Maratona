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
string a;cin >> a;
r(i,a.size()){
    a[i] = tolower(a[i]);
}
int abc = a.find("zelda");
if(abc == -1){
    cout << "Link Tranquilo" << endl;
}else{
    cout << "Link Bolado" << endl;
}
}

