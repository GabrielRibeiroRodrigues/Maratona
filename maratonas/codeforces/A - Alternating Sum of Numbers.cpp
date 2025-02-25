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
#define f(i, n) for (int i = 0; i < (n); ++i)   
 
 
int main() {
int n; cin >> n;
int soma = 0;
f(i,n){
     soma = 0;
    int b; cin >> b;
    f(j,b){
        int numero;cin >> numero;
        if((j%2) == 0){
            soma += numero;
        }else{
            soma -= numero;
        }
    }
cout << soma << endl;}
}