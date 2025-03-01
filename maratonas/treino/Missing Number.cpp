#include <bits/stdc++.h>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    long long sum_expected = (n * (n + 1)) / 2;
    long long sum_actual = 0;
    long long aux;

    for (int i = 0; i < n - 1; i++) {
        cin >> aux;
        sum_actual += aux;
    }

    cout << (sum_expected - sum_actual) << endl; 
}
