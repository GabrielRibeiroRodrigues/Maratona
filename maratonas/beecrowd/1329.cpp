            #include <bits/stdc++.h>
            using namespace std;
            int main()
            {
                
                int n,cM = 0,cJ = 0,jogo;
              while(cin >> n && n!=0){
                cM = 0;
                cJ = 0;
                for(int i=0; i<n; i++){
                cin >> jogo;
                if(jogo == 0){
                    cM += 1;
                }else{
                    cJ += 1;
                }
              }
              cout << "Mary won " <<cM<< " times and John won "<<cJ<< " times" << endl;
            }
            
            }