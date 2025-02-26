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
int n;cin >> n;
if(n > 0 && n < 36){
cout << 1 << endl;
}
else if(n > 35 && n < 71){
    cout << 2 << endl;
}
else if(n > 70 && n < 106){
    cout << 3 << endl;
}
else if(n > 105 && n < 151){
    cout << 4 << endl;
}
else{
    cout << "erro" << endl;
}



}
