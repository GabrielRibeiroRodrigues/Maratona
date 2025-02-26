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
string palavra;
bool auxx = false;
int abr = 0,fec  = 0;
while(getline(cin,palavra)){
    abr = 0; fec = 0;auxx = false;
    r(i,palavra.size()){
        if(palavra[i] == '(' ){
            abr++;
        }
        if(palavra[i] == ')'){
            fec++;
            if(abr <= 0){
                cout << "incorrect" << endl;
                auxx = true;
                break;
            }
        }
    }
    
    if(abr == fec && auxx == false){
        cout << "correct" << endl;
    }else{
        if(auxx == false){
        cout << "incorrect" << endl;}
    }
}


}
