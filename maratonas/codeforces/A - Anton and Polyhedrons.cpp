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
    set<char>s;   
   string a;getline(cin,a);
   f(i,a.size()){
    if(a[i] == '{' || a[i] == '}' || a[i] == ','|| a[i] == ' '){
 
    }else{
        char b;
        b = a[i];
        s.insert(b);
    }
   }
 
   cout << s.size() << endl;    
   
}