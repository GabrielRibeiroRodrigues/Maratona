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


int main() { 
    int matriz[5][8], somaL = 0,somaC = 0, pos1 = 0, pos2 = 0,resp1,resp2; 


    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 8; j++){
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < 5; i++){
        if(somaL % 2 != 0){
            if(matriz[i][7] != 1 ){
                cout << "achei "  << pos1 << endl;
                resp1 = pos1;
            }else{
                somaL = 0;
            }
        }
        for(int j = 0; j < 8; j++){
           somaL += matriz[i][j];
           pos1 = i;
        }
    }
    for(int j = 0; j < 8; j++){
        cout << "somaC" << somaC << endl;
        if(somaC%2 != 0){
            if(matriz[4][j-1] != 1){
                cout << "achei2" << pos2 << endl;
                somaC = 0;
                resp2 = pos2;
            }else{
                somaC = 0;
            }
        }else{
            somaC = 0;
        }
        for(int i = 0; i < 5; i++){
            cout << matriz[i][j] << endl;
            somaC += matriz[i][j];
            pos2 = j;
        }
        cout << endl;
    }

    
    for(int i = 0; i < 5; i++){
        cout << endl;
        for(int j = 0; j < 8; j++){
            // cout << "pos :" << i << " " << resp1 << " " << j << " " << resp2 << endl;
            if(i == resp1 && j == resp2){
                cout << " " << '0';
            }else{
           cout << " " << matriz[i][j];}
        }
    }


    return 0;
}

// 1 1 0 0 1 0 0 0
// 1 0 0 0 0 0 1 0
// 1 0 1 0 1 0 0 1
// 1 0 0 0 0 0 1 0
// 0 0 1 0 0 0 0 1