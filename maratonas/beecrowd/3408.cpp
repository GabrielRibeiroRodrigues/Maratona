#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int soma = 0, num, qtd;
    string a, numero;
    
    cin >> qtd;
    
    for(int z = 0; z < qtd; z++) {
        cin >> a;
        numero.clear();
        
        for(int i = 0; i < a.size(); i++) {
            if(isdigit(a[i])) {
                numero += a[i];
            }
        }
        
        if (!numero.empty()) {
            num = stoi(numero);
            soma += num;
        }
    }
    
    cout << soma << endl;

    return 0;
}