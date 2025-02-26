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
    vector<int>v,v2;
int n,semtroca = 0;cin >> n;r(i,n){
    semtroca = 0;
    v.clear();
    v2.clear();
int qtdn;cin >>  qtdn;r(i,qtdn){
int aux;cin >> aux;v.pb(aux);v2.pb(aux);
}
sort(v2.begin(),v2.end(),greater<int>());
r(i,qtdn){
    if(v[i] == v2[i]){
        semtroca++;
    }
}
cout << semtroca << endl;
}


}
