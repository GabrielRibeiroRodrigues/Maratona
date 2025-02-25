#include <bits/stdc++.h>
using namespace std;
 
#define f(i, n) for (int i = 0; i < (n); ++i)
 
int main() {
    int N;
    cin >> N;
 
    int matriz[10][10] = {0};
    int o = 0;
 
    f(i, N) {
        int D, L, R, C;
        cin >> D >> L >> R >> C;
 
       
        if (R < 1 || R > 10 || C < 1 || C > 10 || (D == 0 && C + L - 1 > 10) || (D == 1 && R + L - 1 > 10)) {
            cout << "N" << endl;
            return 0;
        }
 
        R--; 




...
        C--;
 
        if (D == 0) {
            for (int j = 0; j < L; j++) {
                if (matriz[R][C + j] == 0) {
                    matriz[R][C + j] = 1;
                } else {
                    o++;
                }
            }
        } else {
            for (int j = 0; j < L; j++) {
                if (matriz[R + j][C] == 0) {
                    matriz[R + j][C] = 1;
                } else {
                    o++;
                }
            }
        }
    }
 
    if (o == 0) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }
 
    return 0;
}