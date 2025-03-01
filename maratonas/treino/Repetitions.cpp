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
int rep = 1,maiorrep = 0;
string a;cin >> a;

r(i,a.size()){
if(a[i] == a[i+1]){
    rep++;
}
else{
    if(maiorrep < rep){
        maiorrep = rep;
        rep = 0;
    }else{
        rep = 0;
    }
}

}cout << maiorrep << endl;
}
