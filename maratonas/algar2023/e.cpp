// #include <bits/stdc++.h>
// using namespace std;

// #define _ ios_base::sync_with_stdio(0); cin.tie(0);
// #define endl '\n'

// #define d(x) cout<<#x<<" = "<<x<<endl;

// #define pb push_back
// #define pf push_front
// #define mp make_pair
// #define f first
// #define s second
// #define r(i,n) for(int i = 0; i < (n); i++)
// typedef long long ll;
// typedef pair<int, int> ii;

// const int INF = 0x3f3f3f3f;
// const ll LINF = 0x3f3f3f3f3f3f3f3fll;

// const int MAX = 1e5+5, INF = 1e9+9;

// vector <ii> adj[MAX];
// int dist[MAX];

// int dk(int s, int t) {
//     priority_queue <ii, vector<ii>, greater<ii>> fila;
//     fill(begin(dist), end(dist), INF);
//     dist[s] = 0;
//     fila.emplace(dist[s], s);
//     while (!fila.empty()) {
//         auto [d, u] = fila.top();
//         fila.pop();
//         if (u == t) return dist[t];
//         if (d != dist[u]) continue;
//         for (auto [w, v] : adj[u])
//             if (dist[v] > d + w) {
//                 dist[v] = d + w; fila.emplace(dist[v], v);
//             }
//     } return -1;
// }

// int main()
// { 



// }
