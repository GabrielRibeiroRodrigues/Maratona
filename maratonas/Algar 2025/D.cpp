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
    int n, k;
    cin >> n >> k;

    if (k > n) {
        cout << "0" << endl;  
    }
    long long fatn = 1;


    long long fatk = 1;
    long long fatnk = 1;
    for (int i = n; i > 1; i--) {
        fatn *= i;
    }

    for (int i = k; i > 1; i--) {
        fatk *= i;
    }

  
    for (int i = (n - k); i > 1; i--) {
        fatnk *= i;}   
    long long resultado = fatn / (fatk * fatnk);

 
    cout << resultado << endl;
}
