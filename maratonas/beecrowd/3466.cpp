#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int s, d, f;
ll memo[100][100];

ll souve(int sum, int dados) {
    if(dados==d) return sum ==s;
    if(sum>=s) return 0;
    if(memo[sum][dados]!=-1) return memo[sum][dados];
    
    ll ans = 0;
    for(int i=1; i<=f; i++)
        ans += souve(sum+i, dados+1);
    
    return memo[sum][dados]=ans;
}

int main() {
    int tc; cin>>tc;
    while(tc--){
        cin>>s>>d>>f;
        memset(memo, -1, sizeof memo);
        cout<<fixed<<setprecision(f);
        cout<<souve(0, 0)/(long double)pow(f, d)<<endl;
    }
    return 0;
}