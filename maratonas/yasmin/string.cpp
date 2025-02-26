#include <bits/stdc++.h>
using namespace std;
int main(){ 

string a,nova;
cin >> a;

for(int i = 0;  i < a.size(); i++){
 
    if(a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U' && a[i] != 'a' && a[i] != 'e' && a[i] != 'i' &&
        a[i] != 'o' && a[i] != 'u'){
            nova += a[i];
        }
}

    cout << nova << endl;

}
