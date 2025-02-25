#include <bits/stdc++.h>
using namespace std;

int main(){
int x = 0, y = 0;
int j = 0;
cin >> x >> y;
int p = 0;
for(int i = 0; i < y; i++){

    if(j == x){
        j = 0;
    }
    p += 1;
    j++;
    if(j == x){
        cout << p ;
    }else{
    cout << p << " ";
    }


    if(j == x){
        cout << endl;
    }
}
}