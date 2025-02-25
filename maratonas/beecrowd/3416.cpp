#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n = 0, l = 0, d = 0;cin >> n >> l >> d;
    float linicial = l;
   float qtdmcafe = (n * d) / 1000;
  while(l < qtdmcafe) {
    l = l + linicial;
  }
   cout << l << endl;
}