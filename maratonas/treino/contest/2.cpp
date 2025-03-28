#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    vector<int> pos(n + 1);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        pos[v[i]] = i;
    }
    
    int consultas;
    cin >> consultas;
    
    int totalDireta = 0, totalInversa = 0;
    
    for (int i = 0; i < consultas; i++) {
        int x;
        cin >> x;
        
        int posX = pos[x];
        
        totalDireta += posX + 1;
        totalInversa += (n - posX);
    }
    
    cout << totalDireta << " " << totalInversa << endl;
}
