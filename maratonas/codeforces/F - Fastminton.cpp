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
#define f(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;
typedef pair<int, int> ii;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main()
{
int esq = 0, dir = 0, saque = 0,partidaEsq = 0,partidaDir = 0,fim = 0; // 0 Esquer 1 Dire SSSSSSSSSS
string texto;cin >> texto;
 
f(i,texto.size()){
    if(texto[i] == 'S' && saque == 0){
        esq++;
    }
    else if(texto[i] == 'S' && saque == 1){
        dir++;
    }
    if(texto[i] == 'R' && saque == 0){
        dir++;
        saque = 1;
    }
    else if(texto[i] == 'R' && saque == 1){
        esq++;
        saque = 0;
    }
 
    if(esq == 10){
        partidaEsq++;
        esq = 0;
        dir = 0;
        saque = 0;
    }
    else if(dir == 10){
        partidaDir++;
        esq = 0;
        dir = 0;
        saque = 1;
    }
    if(esq > 4 && (esq-dir)>1){
        partidaEsq++;
        esq = 0;
        dir = 0;
        saque = 0;
    }
    else if(dir > 4 && (dir-esq)>1){
        partidaDir++;
        esq = 0;
        dir = 0;
        saque = 1;
    }
    if(partidaEsq == 2){
        fim++;
    }
    else if(partidaDir == 2){
        fim++;
    }
    if(texto[i] == 'Q'){
        if(fim > 0){
                if(partidaDir == 2){
                    cout << partidaEsq << " - " << partidaDir << " (winner)" << endl;
                }else{
                    cout << partidaEsq << " (winner) - " << partidaDir << endl;
                }
        }
        else{
        if(saque == 1){
        cout << partidaEsq << " (" << esq << ") - " << partidaDir << " (" << dir<< "*)" << endl;}
        else{
            cout << partidaEsq << " (" << esq << "*) - " << partidaDir << " (" << dir<< ")" << endl;}
        }
        }
}
 
 
}