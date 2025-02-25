#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;  

    for (int t = 0; t < N; t++) {
        int posicoes, qtdn, n;
        cin >> posicoes >> qtdn;
        multimap<int, int> mapa;

        for (int i = 0; i < qtdn; i++) {
            cin >> n;
            int resultado = n % posicoes;
            mapa.insert({resultado, n});
        }

        for (int i = 0; i < posicoes; i++) {
            cout << i << " ->";
            pair<multimap<int, int>::iterator, multimap<int, int>::iterator> range = mapa.equal_range(i);
            for (multimap<int, int>::iterator it = range.first; it != range.second; ++it) {
                cout << " " << it->second << " ->";
            }
            cout << " \\" << endl;
        }

        if (t < N - 1) {
            cout << endl;  
        }
    }

    return 0;
}