#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
 
int main() {
    int tam = 0, countA = 0;
    string a; 
    cin >> tam >> a;
    
    int i = 0;
    while (i < tam) {
        if (a[i] == 'a') {
            int j = i;
            while (j < tam && a[j] == 'a') {
                j++;
            }
            if (j - i > 1) {
                countA += (j - i);
            }
            i = j;
        } else {
            i++;
        }
    }
    
    cout << countA << endl;
}