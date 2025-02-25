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
int a , b ; cin >> a >> b;
if(a == 1 && b == 2 || b == 1 && a == 2 ){
    cout << "3" << endl;
}
else if(a == 3 && b == 2 || b == 3 && a == 2 ){
    cout << "1" << endl;
}
else if(a == 1 && b == 3 || b == 1 && a == 3 ){
    cout << "2" << endl;
}
 
}