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
            int k = 0;
            f(i,8){
                int a;cin >> a;
                if(a == 9){
                    cout << "F" << endl;
                    k++;
                    break;
                }
            }if(k == 0){
                cout << "S" << endl;
            }
        }