#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool canTransform(vector<int> &a, int x) {
    int n = a.size();
    queue<vector<int>> q;
    q.push(a);
    
    while (!q.empty()) {
        vector<int> curr = q.front();
        q.pop();
        
        if (curr.size() == 1) {
            if (curr[0] == x) return true;
            continue;
        }
        
        int size = curr.size();
        for (int k = 2; k <= size; ++k) {
            if (size % k == 0) {
                vector<int> next;
                int chunkSize = size / k;
                for (int i = 0; i < size; i += chunkSize) {
                    double sum = 0;
                    for (int j = 0; j < chunkSize; ++j) {
                        sum += curr[i + j];
                    }
                    double avg = sum / chunkSize;
                    if (avg != floor(avg)) break;
                    next.push_back((int)avg);
                }
                if ((int)next.size() == k) {
                    q.push(next);
                }
            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n);
        for (int &ai : a) cin >> ai;
        
        cout << (canTransform(a, x) ? "YES" : "NO") << "\n";
    }
    
    return 0;
}