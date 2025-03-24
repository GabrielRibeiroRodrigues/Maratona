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

string a;cin >> a;
string a1,a2;
int valor = stoi(a);
if(valor >= 0){
    cout << valor << endl;
}else{
    for(int i = 0; i < a.size(); i++){
    
    if(i != a.size()-1){
        a1 += a[i];
    }
    if(i != a.size()-2){
        a2 += a[i];
    }
    }
int a11 = stoi(a1);
int a22 = stoi(a2);
if(a11 >= a22){
    cout << a11 << endl;
}else{
    cout << a22 << endl;
}
}

}
