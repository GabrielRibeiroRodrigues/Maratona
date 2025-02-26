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

int N, W; // N quantidade de itens e W capacidade da mochila
int peso[101], custo[101]; // Vetores que armazenam peso e custo de cada opção
int pd[101][101]; // Matriz para armazenar valores já calculados

int mochila(int i, int c){ // i item atual e c capacidade atual da mochila
    if (i == N) return 0; // acabaram os itens
    if (c == 0) return 0; // mochila está cheia
 
    if(pd[i][c]!=-1) return pd[i][c];	// memoização
    
    int naopegar = mochila(i+1, c); // apenas pula para o próximo item
    int pegar = 0;
    if (c>=peso[i]){ // apenas coloca se tiver capacidade suficiente
        pegar = mochila(i+1, c-peso[i]) + custo[i];	// prox item, tira o peso e soma o custo
    } 
    return pd[i][c] = max(naopegar, pegar); //retorna e salva o maior valor
}

int main() {
    memset(pd, -1, sizeof pd); // zera a matriz inserindo um valor que não faz parte da
    cin >> N;                
    for(int i = 0; i < N; i++){
        cin >> peso[i];
    }
    for(int i = 0; i < N; i++){
        cin >> custo[i];
    }
    cin >> W;
    cout << mochila(0, W) << '\n';
    return 0;
}
