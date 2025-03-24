#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

vector<int> memo(100005, -1); 

int resp(int n) {
    if (n == 0) return 0; 

    if (memo[n] != -1) return memo[n]; 

return resp(memo[])
}

int main() {
  memo[0] = 1;
  memo[1] = 1;
    int n;
    cin >> n;
    cout << resp(n) << endl;
}
