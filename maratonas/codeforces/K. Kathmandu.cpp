#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define pb push_back

int main() { 
    int min, dur, ref;
    cin >> min >> dur >> ref;
    
    vector<int> v;
    
    for (int i = 0; i < ref; i++) {
        int aux;
        cin >> aux;
        v.pb(aux);
    }
    
    // Caso especial: Nenhuma referência e min <= dur, resposta é "Y"
    if (v.empty() && min <= dur) {
        cout << "Y" << endl;
        return 0;
    }

    bool valido = false;

    // Verificar se há pelo menos um intervalo suficiente
    for (int i = 1; i < v.size(); i++) {
        if (v[i] - v[i - 1] >= min) {
            valido = true;
            break;
        }
    }

    cout << (valido ? "Y" : "N") << endl;

    return 0;
}
