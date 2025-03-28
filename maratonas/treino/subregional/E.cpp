#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define pb push_back
#define mp make_pair
#define f first
#define s second

typedef long long ll;
typedef pair<int, int> ii;

int main() {
    
int n;cin >> n;
int matriz[n][n];
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cin >> matriz[i][j];
    }
}



int maior = max({matriz[0][0], matriz[0][n-1], matriz[n-1][0],matriz[n-1][n-1]});
if(maior == matriz[0][0]){
    cout << "2" << endl;
}
else if(maior ==  matriz[0][n-1]){
    cout << "3" << endl;
}
else if(maior == matriz[n-1][0]){
    cout << "1" << endl;
}
else if(maior == matriz[n-1][n-1]){
    cout << "0" << endl;
}


}
