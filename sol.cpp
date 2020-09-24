#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN=1e5;
int a[mxN], n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; ++i)
			cin >> a[i];
		sort(a, a+n);
		int tmp=INT_MAX;
		for(int i=0; i<n-1; ++i)
			tmp=min(tmp, abs(a[i]-a[i+1]));
		cout << tmp << "\n";
	}
}
