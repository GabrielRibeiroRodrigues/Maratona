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
typedef pair<ll, int> lli; 

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{ 
    _ 

    int qtd_loc;
    cin >> qtd_loc;

    vector<lli> dinamites; 

    for(int i = 0; i < qtd_loc; i++){
        int p_inicial, v; 
        cin >> p_inicial >> v;

     
        int tempo_explosao = i; 

        long long posicao_explosao = (long long)p_inicial + (1LL * v * tempo_explosao);
        
        dinamites.pb({posicao_explosao, tempo_explosao});
    }

    cout << dinamites.size() << endl;
    for(const auto& dinamite : dinamites){
        cout << dinamite.f << " " << dinamite.s << endl;
    }

    return 0;
}
