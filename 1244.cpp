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

int main(){ 
int n;cin >> n;
cin.ignore();
for(int j = 0; j < n; j++){
string palavras,auxiliar;
getline(cin,palavras);
vector<string>palavraSeparadas;
istringstream stream(palavras);
while (stream >> auxiliar) {
    palavraSeparadas.push_back(auxiliar);
}
stable_sort(palavraSeparadas.begin(), palavraSeparadas.end(), [](const string& a, const string& b) {
    return a.size() > b.size();  
});
    for(int k = 0; k < palavraSeparadas.size(); k++){
        cout << palavraSeparadas[k] << " ";
    }
    cout << endl;
}
}
