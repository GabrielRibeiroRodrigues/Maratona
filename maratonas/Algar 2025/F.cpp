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

long long fatorial(int num) {
    long long resultado = 1;
    for (int i = 2; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}
int main() {
    int N;
    cin >> N;

    vector<vector<int>> piramide;

   
    for (int i = 0; i < N; i++) {
        vector<int> linha;
        for (int j = 0; j <= i; j++) {
            int valor;
            cin >> valor;
            linha.push_back(valor); 
        }
        piramide.push_back(linha);
    }


    for (int i = N - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (piramide[i + 1][j] > piramide[i + 1][j + 1]) {
                piramide[i][j] += piramide[i + 1][j];
            } else {
                piramide[i][j] += piramide[i + 1][j + 1];
            }
        }
    }

    
    cout << piramide[0][0] << endl;

    return 0;
}
