#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d = 0,c = 0 ,r = 0,qtdc = 0,qtdr = 0,x = 0,somaR = 0,contador = 0;
    vector<int>v;
    cin >> d>>qtdc>>qtdr;
    int totalat = qtdr + qtdc;
    for(int i = 0; i < totalat; i++){
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < qtdr; i++){
        somaR += v[qtdc+i]; 
        contador++;
    }
    d += somaR;
    for(int i = 0; i < qtdc; i++){
        if(d >= v[i]){
            contador++;
            d -= v[i];
        }else{
            break;
        }
    }
    cout << contador << endl;
}