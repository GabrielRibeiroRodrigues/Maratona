#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define pb push_back
#define mp make_pair
#define f first
#define s second

typedef long long ll;
typedef pair<int, int> ii;
#define f(i, n) for (int i = 0; i < (n); ++i)
vector<string>v;
vector<int>v2,v4;

void gerarCombinacoes(string s, int b) {
    if (b == s.size()) {
        v.pb(s);
        return;
    }
    if (s[b] == '*') {
        s[b] = '0';
        gerarCombinacoes(s, b + 1);
        s[b] = '1';
        gerarCombinacoes(s, b + 1);
        s[b] = '*';
    } else {
        gerarCombinacoes(s, b + 1);
    }
}

int binarioParaDecimal(string binario) {
    int decimal = 0;
    int base = 1;

    for (int i = binario.size() - 1; i >= 0; i--) {
        if (binario[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    return decimal;
}

string decimalParaBinario(int decimal, int tamanho) {
    string binario = "";

    if (decimal == 0) return string(tamanho, '0');

    while (decimal > 0) {
        binario = (decimal % 2 == 0 ? "0" : "1") + binario;
        decimal /= 2;
    }

    while (binario.size() < tamanho) {
        binario = "0" + binario;
    }

    return binario;
}

int main() {
    string s, d;
    cin >> s >> d;
    int verificacao = 0;
    int j = 0;

    f(i,d.size()) {
        if(d[i] == '*') {
            verificacao++;
        }
    }

    if(verificacao == 0) {
        v.pb(d);
        int aux2 = binarioParaDecimal(v[0]);
        v4.pb(aux2);
        v.clear();
    }

    verificacao = 0;

    f(i,s.size()) {
        if(s[i] == '*') {
            verificacao++;
        }
    }

    if(verificacao == 0) {
        int aux2 = binarioParaDecimal(s);
        v2.pb(aux2);
    }

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '*') {
            gerarCombinacoes(s, 0);
            f(i,v.size()) {
                int aux = binarioParaDecimal(v[i]);
                v2.pb(aux);
            }
            j++;
        }
        if(j > 0) {
            break;
        }
    }

    v.clear();
    j = 0;

    for(int i = 0; i < d.size(); i++) {
        if(d[i] == '*') {
            gerarCombinacoes(d, 0);
            f(i,v.size()) {
                int aux = binarioParaDecimal(v[i]);
                v4.pb(aux);
            }
            j++;
        }
        if(j > 0) {
            break;
        }
    }

    int resultado = 0;

    f(i,v2.size()) {
        f(j,v4.size()) {
            if(v4[j] != 0 && (v2[i] % v4[j]) == 0) {
                resultado = v2[i];
                break;
            }
        }
    }

    cout << decimalParaBinario(resultado, s.size()) << endl;
}
