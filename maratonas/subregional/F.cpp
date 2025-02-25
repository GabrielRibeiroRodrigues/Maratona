#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define pb push_back
#define mp make_pair
#define f first
#define s second

typedef long long ll;
typedef pair<int, int> ii;


int main() {

int t=1,tt=1,x,ttt;
cin>>x;
for(int i=0; i<x;i++){
ttt = t+tt;

t=tt;
tt= ttt;
}
printf("%d",t);
printf("\n");}
    