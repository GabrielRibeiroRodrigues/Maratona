    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
     int n,o;
     string tempo;
     cin>>n;
     for(int i=0;i<n;i++){
        cin >> o; cin >> tempo;
        if(tempo == "2T"){
            if(o <= 45){
                cout << o+45 << endl;
            }else{
                if(o > 45){
                    int acrescimos = o-45;
                    cout << 45+(o-acrescimos)<< "+" << o-45<< endl; }
            }
        }else{
            if(o > 45){
                cout << "45+" << o-45 <<endl;
            }else{cout << o << endl;}
        }
     }
    }