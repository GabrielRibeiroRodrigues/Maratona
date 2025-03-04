#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, int> pli;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pli>> adj(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        adj[a].emplace_back(w, b);
        adj[b].emplace_back(w, a);
    }

    vector<long long> dist(n + 1, INF);
    vector<int> pai(n + 1, -1);
    priority_queue<pli, vector<pli>, greater<pli>> pq;

    dist[1] = 0;
    pq.emplace(0, 1);

    while (!pq.empty()) {
        auto current = pq.top();
        pq.pop();

        long long d = current.first;
        int u = current.second;

        if (d != dist[u]) continue;

        for (const auto &edge : adj[u]) {
            long long w = edge.first;
            int v = edge.second;

            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pai[v] = u;
                pq.emplace(dist[v], v);
            }
        }
    }

    if (dist[n] == INF) {
        cout << "-1\n";
        return 0;
    }

    vector<int> caminho;
    for (int v = n; v != -1; v = pai[v]) {
        caminho.push_back(v);
    }
    reverse(caminho.begin(), caminho.end());

    for (size_t i = 0; i < caminho.size(); i++) {
        cout << caminho[i];
        if (i < caminho.size() - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}