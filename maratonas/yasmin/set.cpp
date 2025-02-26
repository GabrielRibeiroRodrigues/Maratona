#include <bits/stdc++.h>
using namespace std;
int main(){ 

set<int>s; // Declarando um set

int quant;
cin >> quant;
for(int i = 0; i < quant; i++){
    int aux;
    cin >> aux;
    s.insert(aux); // Inserindo valores dentro do set
}
cout << s.size() << endl; // Printando o tamanho do set

}
