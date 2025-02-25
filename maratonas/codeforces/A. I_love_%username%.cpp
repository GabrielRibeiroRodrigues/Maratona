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

int main()
{ 
    int n,resp = 0,maior = 0,menor = INF;cin >> n;
    r(i,n){
    int aux;cin >> aux;
    if (i == 0){
        menor = aux;
        maior = aux;
    }
    if(aux > maior && i != 0){

        maior = aux;
        resp++;
        if(menor > aux) {
            menor = aux;
        }
    }else if(menor > aux && i != 0){

    menor = aux;
    resp++;}
    }
cout << resp << endl;
}
