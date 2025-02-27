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
int cartas;
queue<int>q;
vector<int>v;
while(cin >> cartas){
    v.clear();
    if(cartas == 0){
        break;
    }
for(int i = 1; i < cartas+1; i++){
    q.push(i);
}
while(q.size() != 1){
int primeira = q.front();
v.pb(primeira);
q.pop();
int segundo = q.front();
q.pop();
q.push(segundo);
}
// cout << q.front() << endl;
// cout << q.back() << endl;
cout << "Discarded cards: ";
// r(j,v.size()){
    for(int j = 0; j < v.size(); j++){
    cout << v[j];
    if(j+1 == v.size()){

    }else{
        cout << ", ";
    }
}
cout << endl;
cout << "Remaining card: " << q.front() << endl;
q.pop();
}



}
