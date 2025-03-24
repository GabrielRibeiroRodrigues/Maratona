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
    int n;
    cin >> n;
    while (n--) {
        string dieta, cafe, almoco;
        cin >> dieta >> cafe >> almoco;
        unordered_set<char> dieta_set(dieta.begin(), dieta.end());
        unordered_set<char> consumido;
        bool cheater = false;
        for (char c : cafe + almoco) {
            if (dieta_set.count(c)) {
                dieta_set.erase(c);
            } else {
                cheater = true;
                break;
            }
        }
        if (cheater) {
            cout << "CHEATER" << endl;
        } else {
            vector<char> jantar(dieta_set.begin(), dieta_set.end());
            sort(jantar.begin(), jantar.end());
            for (char c : jantar) cout << c;
            cout << endl;
        }
    }
    return 0;
}
