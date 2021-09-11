#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n;

	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		if (n == 1) cout << 0 << "\n";
		else {
		   sort(v.begin(), v.end());
		   int h = (v[v.size() - 1] / 2) + v[0];
		   pair<int, int> p;
		   p.first = 999;
		   p.second = 0;
		   for (int i = 0; i < n; i++) {
			   if (abs(v[i] - h) < p.first) {
				   p.first = abs(v[i] - h);
				   p.second = i;
			   }
		   }
		   cout << ((v[p.second] - v[0]) * 2) + ((v[v.size() - 1] - v[p.second]) * 2) << "\n";
		}
	}
}