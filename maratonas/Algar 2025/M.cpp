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

int main() {
    string frase, palavra, resultado;
    getline(cin, frase);

    istringstream stream(frase);
    while (stream >> palavra) {
        string nova;
        for (int i = 0; i < palavra.size(); i++) {
            if (palavra[i] == 'r') {
                if (i + 1 < palavra.size() && palavra[i + 1] == 'r') {
                    nova += 'l'; 
                    i++; 
                } else if (i != palavra.size() - 1) {
                    nova += 'l'; 
                } else {
                    nova += 'r'; 
                }
            } else {
                nova += palavra[i]; 
            }
        }
        if (!resultado.empty()) 
        resultado += " "; 
        resultado += nova;
    }

    cout << resultado << endl;
}
