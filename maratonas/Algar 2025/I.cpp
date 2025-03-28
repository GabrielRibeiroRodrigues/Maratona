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
cin.ignore();
int tem = 0,ntem = 0;
vector<string>v;
vector<string>v2;
r(i,n){
string aux;
getline(cin,aux);
string palavranova ;
for(int j=0; j < aux.size()-2; j++){
    palavranova += aux[j+2];
}
v.pb(palavranova);
if(aux[0] == '*'){
    tem++;   
}else{
    ntem++;
}

}
sort(v.begin(),v.end());
for(int p = 0; p < v.size(); p++){
  cout << v[p] << endl; 
}
cout << "Tinha no mercado: " << tem << " - Nao tinha no mercado: " << ntem << endl;
}


