#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long moves = 0; 

    
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            moves += arr[i - 1] - arr[i]; 
            arr[i] = arr[i - 1]; 
        }
    }

    
    cout << moves << endl;

    return 0;
}
