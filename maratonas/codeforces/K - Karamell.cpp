#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int n;
vector<int> a;
 
const int MAXN = 1e2, MAXA = 1e2;
 
int memo[MAXN+1][MAXA*MAXA+1];
 
bool f(int i, int curr) {
	if (curr < 0) return false;
	if (i == n) return curr == 0;
 
	int &ans = memo[i][curr];
	if (ans != -1) return ans;
	return ans = (f(i+1, curr) | f(i+1, curr - a[i]));
}
 
int main() { _
	cin >> n;
	a = vector<int>(n);
 
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
 
	int sum = accumulate(a.begin(), a.end(), 0);
	if (sum %2 == 1) {
		cout << -1 << endl;
		exit(0);
	}
 
	
	int goal = sum/2;
	memset(memo, -1, sizeof memo);
	if (!f(0, goal)) {
		cout << -1 << endl;
		exit(0);
	}
 
	vector<int> vl, vr;
	for (int i = 0; i < n; i++) {
		if (f(i+1, goal)) vr.push_back(a[i]);
		else {
			vl.push_back(a[i]);
			goal -= a[i];
		}
	}
 
	int l = 0, r = 0;
	while (vl.size() || vr.size()) {
		if (l <= r) {
			l += vl.back();
			cout << vl.back();
			vl.pop_back();			
		}
		else {
			r += vr.back();
			cout << vr.back();
			vr.pop_back();
		}
 
		cout << " \n"[vl.empty() && vr.empty()];
	}
	exit(0);
}