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
    int matriz[5][8], somaL = 0, pos1 = -1, pos2 = -1; // Inicializando as variáveis

    // Leitura da matriz
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 8; j++){
            cin >> matriz[i][j];
        }
    }

    // Verificando as linhas
    for(int i = 0; i < 4; i++){
        somaL = 0; // Reinicia a soma para cada linha

        for(int j = 0; j < 7; j++){ // Corrigindo loop
            somaL += matriz[i][j];
        }

        if (somaL % 2 != 0) {
            pos1 = i;
            pos2 = 7; // Última coluna
        }
    }

    cout << "erros " << pos1 << " " << pos2 << endl;

    return 0;
}

// 11001000
// 10000010
// 10101001
// 10000010
// 10000010
// 00100001