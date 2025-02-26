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

int n, m, r=0;
vector<int> grafo[1002];
int visitados[1002];

void dfs(int i){
    visitados[i]=1;
    for(int j=0; j<grafo[i].size(); j++){int u = grafo[i][j]; if(visitados[u]==0) dfs(u);}
}

int main() {
    int a, b;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>a>>b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    for(int i=1; i<=n; i++){
        if(visitados[i] == 0){
            r++;
            dfs(i);
        }
    }
    if(r == 1){
        cout << "COMPLETO" << endl;
    }else{
        cout << "INCOMPLETO" << endl;
    }
    
}


