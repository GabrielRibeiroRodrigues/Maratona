#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

string verificarLifePotential(int N, int K, vector<int>& A) {
    unordered_set<int> valoresVistos;
    
    // Caso especial para K == 0
    if (K == 0) {
        for (int i = 0; i < N; ++i) {
            if (valoresVistos.count(A[i]) > 0) {
                return "Yes";
            }
            valoresVistos.insert(A[i]);
        }
        return "No";
    }

    // Caso geral para K != 0
    for (int i = 0; i < N; ++i) {
        int num = A[i];

        // Verificar se a diferença K ou -K existe no conjunto
        if (valoresVistos.count(num - K) > 0 || valoresVistos.count(num + K) > 0) {
            return "Yes";
        }

        // Adicionar o valor atual ao conjunto
        valoresVistos.insert(num);
    }
    
    return "No";
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    
    // Leitura do vetor A
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    // Chamar a função e imprimir o resultado
    cout << verificarLifePotential(N, K, A) << endl;
    
    return 0;
}
