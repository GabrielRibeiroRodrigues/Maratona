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
string codigo,acao,prateleira;
vector<pair<string,string>>v;
vector<string>codigos;
while(cin >> codigo){
    if(codigo == "0"){
        break;
    }
    cin >> acao >> prateleira;
    if(acao == "adicionar"){
        v.pb({codigo,prateleira});
        codigos.pb(codigo);
    }else{
        
        v.erase(remove_if(v.begin(), v.end(), [&](const pair<string, string> &p) { 
            return p.first == codigo; 
        }), v.end());


    }
}
for (const auto& cod : codigos) {
    bool encontrado = false;

    for (const auto& par : v) {
        if (par.first == cod) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << cod << " encontrado" << endl;
    } else {
        cout << cod << " nao encontrado" << endl;
    }
}
}
