     #include <bits/stdc++.h>
        using namespace std;
        int main()
        {
 string bits[8];
 string resposta = "S";
for(int i = 0; i < 8;i++){
        cin>>bits[i];
}
        for(int i = 0; i < 8;i++){
       if(bits[i] == "9"){
        resposta = "F";
       }
       }
        cout<<resposta<<endl;
        return 0;
        }