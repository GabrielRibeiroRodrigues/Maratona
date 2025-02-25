#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>par;
   vector<int>impar;
   
   int a,num;
   cin >> a;
   for(int i =0; i < a; i++){
   cin >> num;
   if((num%2)==0){
       par.push_back(num);
   }else{
       impar.push_back(num);
   }}
   sort(par.begin(),par.end());
   sort(impar.begin(),impar.end(),greater<int>());
   for(int i = 0; i < impar.size(); i++){
       int x = impar[i];
       par.push_back(x);
   }
   for(int i = 0; i < par.size(); i++){
       cout << par[i] << endl;
   }
    return 0;
}