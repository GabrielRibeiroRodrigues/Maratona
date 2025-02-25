#include <bits/stdc++.h>
using namespace std;

int main()
{
int tempos;
const int INF = 1e9+9;
double rest = INF,t;
while(cin >> tempos){
    for(int i = 0; i < tempos; i++){
        cin >> t;
        if(t < rest){
            rest = t;
        }
    }
    cout << rest << endl;
    rest = INF;
}
    
}