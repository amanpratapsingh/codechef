/***
 * Aman Pratap Singh (www.amanpratapsingh.in)
 * Indian Institute of Technology Bhubaneswar
 */
 
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string st;
typedef vector<int> vi;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define fogg(i,a,b) for(int i = (a); i <= (b); ++i)
#define ford(i,a,b) for(int i = (a); i >= (b); --i)
#define test int test_case; cin >> test_case; while(test_case--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mxx (ll)1000000007

int main() {
	off;
	unsigned long long dp[36];
	dp[1] = 2;
	fogg(i, 2, 35) {
		dp[i] = 3*dp[i-1] + 2; 
	}
	int n;
	test {
		cin >> n;

		cout << dp[n] << endl;
	}

  	return 0;
}