#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0,horas = 0,total = 0,b,a,m,d;
    string nome, funcao;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> nome >> funcao >> horas;
        if(funcao == "bonecos" ){
            b += horas;
        }
        if(funcao == "arquitetos" ){
            a += horas;
        }
        if(funcao == "musicos" ){
             m += horas;   
        }
        if(funcao == "desenhistas" ){
             d += horas;    
        }
    }
    cout << (a/4)+(b/8)+(m/6)+(d/12) << endl;

    return 0;
}