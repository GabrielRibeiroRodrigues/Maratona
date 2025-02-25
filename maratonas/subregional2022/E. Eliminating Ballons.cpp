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
            int a,contador = 0;cin >> a;
            vector<int>v,ac;
        
            f(i,a){
            int b;cin>>b;
            v.pb(b);
            }
            
            int i = 0;
            while(!v.empty()){
            int flexa = v[i];
            while(flexa > 0){
                ac.pb(flexa);
                flexa--;
            }
            

            i++;}
            

        }
