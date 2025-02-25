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
        #define ff(i, n) for (int i = 0; i < (n); ++i)   
        int main() {
        string a;cin >> a;
        list<char> b;
        ff(i,a.size()){
            char aux = a[i];
            b.push_back(aux);
        }
        b.sort();
for (list<char>::iterator it = b.begin(); it != b.end(); ++it) {
        cout << *it << " ";
    }
        }
