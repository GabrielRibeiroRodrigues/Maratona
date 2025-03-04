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
int n ;
cin >> n;
string palavra;
for(int i = 0; i < n; i++){
cin >> palavra;
int tamanho = palavra.size() - 2;
char in = palavra[0];
char fi = palavra[palavra.size()-1];
if(palavra.size() > 10) {
    cout << in << tamanho << fi << endl;
}else{
    cout << palavra << endl;
}
}


}
