#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p,newp;
    priority_queue<pair<int,int>>pq;
    int a,b,c;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> b >> c;
        p = { b , c};
        if(p.first < p.second){
        swap(p.first,p.second);
    }
    int aux = p.first;
     int aux2 = p.second;
        if(aux == aux2){
           
        }else{
        pq.push(p);}
    }
    int asw = 0;
    while(pq.size() != 0){
        asw++;
  
        int aux = pq.top().second;
        pq.pop();   
        
        int aux2 = pq.top().second;
        newp = {aux,aux2};
          if(newp.first < newp.second){
        swap(newp.first,newp.second);
    }
    
        pq.pop();
    if(newp.first == newp.second){
        
    }else{
     
        pq.push(newp);
    }
    }
    cout << asw << endl;
}
// 1 2
// 1 3
// 2 3

// 2 1 
// 3 1
// 3 2

// 3 2
// 3 1
// 2 1

// 3 3
// 2 1 
// 2 1

// 3 3
// 2 2
// 1 1

