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
    int pontoAtual = 0, contAv = 0;
    string aviao;
    vector<string> oeste, norte, sul, leste;
    string entrada;
    
    while(cin >> entrada) {
        if(entrada == "0") {
            break;
        }
        if(entrada[0] == 'A') {
            if(pontoAtual == -1) {
                oeste.pb(entrada);
                contAv++;
            } else if(pontoAtual == -3) {
                norte.pb(entrada);
                contAv++;
            } else if(pontoAtual == -2) {
                sul.pb(entrada);
                contAv++;
            } else if(pontoAtual == -4) {
                leste.pb(entrada);
                contAv++;
            }
        } else {
            pontoAtual = stoi(entrada);
        }
    }
    
    int mai1 = max(oeste.size(), leste.size());
    int mai2 = max(sul.size(), norte.size());
    int maior = max(mai1, mai2);

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    bool first = true;
    
    r(i, maior) {
        if(c1 < oeste.size()) {
            if (!first) cout << " ";
            cout << oeste[i];
            c1++;
            first = false;
        }
        if(c2 < norte.size()) {
            if (!first) cout << " ";
            cout << norte[i];
            c2++;
            first = false;
        }
        if(c3 < sul.size()) {
            if (!first) cout << " ";
            cout << sul[i];
            c3++;
            first = false;
        }
        if(c4 < leste.size()) {
            if (!first) cout << " ";
            cout << leste[i];
            c4++;
            first = false;
        }
    }

    cout << endl;
}