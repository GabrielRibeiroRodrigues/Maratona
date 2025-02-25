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
class UnionFind {
public:
    vector<int> parent;
    vector<int> rank;

    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; ++i)
            parent[i] = i;
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void unionSet(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY)
            return;

        if (rank[rootX] < rank[rootY])
            parent[rootX] = rootY;
        else if (rank[rootX] > rank[rootY])
            parent[rootY] = rootX;
        else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
};

int countCountries(int C, const vector<pair<int, int>>& borders) {
    UnionFind uf(C);

    for (const auto& border : borders)
        uf.unionSet(border.first - 1, border.second - 1);

    vector<int> countries;
    for (int i = 0; i < C; ++i)
        countries.push_back(uf.find(i));

    sort(countries.begin(), countries.end());
    countries.erase(unique(countries.begin(), countries.end()), countries.end());

    return countries.size();
}

int main() {
    int C, F;
    cin >> C >> F;

    vector<pair<int, int>> borders;
    for (int i = 0; i < F; ++i) {
        int X, Y;
        cin >> X >> Y;
        borders.push_back(make_pair(X, Y));
    }

    int result = countCountries(C, borders);
    cout << result << endl;

    return 0;
}



