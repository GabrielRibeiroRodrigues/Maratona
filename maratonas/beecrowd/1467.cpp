     #include <bits/stdc++.h>
        using namespace std;
        int main(){
int a,b,c;
            while(cin>>a>>b>>c){
                if(a==b && a!=c){ 
                    cout <<"C" << endl;              
            }else if(c==a &&c!=b){ 
                cout <<"B" << endl;
            }
            else if(b == c && c!=a){
                cout <<"A" << endl;
            }
            else if(b == c && c==a){
                cout <<"*" << endl;
            }}}