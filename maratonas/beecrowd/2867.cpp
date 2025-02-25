#include <bits/stdc++.h>
using namespace std;

int main()
{
  
  int  base, expoente,numeros_digitos;
  int a;cin >> a;
  for(int i = 0; i<a; i++){
      cin >> base >> expoente;
  
  numeros_digitos = (expoente * log10(base)) + 1;

   cout << numeros_digitos << endl;}

   
    return 0;
}