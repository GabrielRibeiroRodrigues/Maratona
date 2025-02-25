#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d = 0;
    cin >>a>>b>>c;
    int totalvz = a+b;
    while(totalvz >= c ){
       totalvz =  totalvz - c; 
        d++;
        totalvz++;
    }
    cout << d << endl;

    return 0;
}
