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
vector<char>v;
string p;
bool ult = false;
cin >> p;
for(int i = 0; i < p.size(); i++){
    if(p[i] == '+'){

    }else{
        v.pb(p[i]);
    }
}
sort(v.begin(),v.end());
// cout << v[0];
// cout << v[1];
// cout << v[2];

for(int i = 0; i < v.size(); i++){
    // cout << v[i] << endl;
    if(i == v.size()-1){
        ult = true;
    }
    cout << v[i];
    if(!ult){
        cout << "+";
    }
    else{
        cout << endl;
    }
}


}
