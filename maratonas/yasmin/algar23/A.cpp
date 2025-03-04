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

double n1,n2,n3,n4,maiorm;
double media = 0;
for(int i = 0; i < n; i++){
cin >> n1 >> n2;
media = n1/n2;
if(media > maiorm){
maiorm = media;
n3 = n1;
n4 = n2;
}
}
cout << n3 << " "<<  n4 << endl;

}
