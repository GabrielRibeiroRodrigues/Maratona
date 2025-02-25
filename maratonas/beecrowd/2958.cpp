    #include <bits/stdc++.h>
    using namespace std;

    #define _ ios_base::sync_with_stdio(0); cin.tie(0);
    #define endl '\n'

    #define d(x) cout<<#x<<" = "<<x<<endl;

    #define pb push_back
    #define pf push_front
    #define mp make_pair
    #define f first
    #define s second
    #define r(i,n) for(int i = 0; i < (n); i++)
    typedef long long ll;
    typedef pair<int, int> ii;

    const int INF = 0x3f3f3f3f;
    const ll LINF = 0x3f3f3f3f3f3f3f3fll;

    int main()
    { 
    string a;
    vector<string>v;
    vector<string>v2;
    int n,m;cin >> n >> m;
    r(i,n){
    r(j,m){
    cin >> a;
    if(a[1] == 'V'){
    v.pb(a);}else{
    v2.pb(a);
    }
    }
    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    int tamanhov = v.size();
    int tamanhov2 = v2.size();
    r(i,v.size()){
        cout << v[tamanhov-1] << endl;
        tamanhov-=1;
    }
    r(i,v2.size()){
        cout << v2[tamanhov2-1] << endl;
        tamanhov2-=1;
    }

    }
