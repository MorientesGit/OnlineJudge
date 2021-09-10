#include<bits/stdc++.h>
using namespace std;

int main() {
	double t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << (int)ceil( (n - 2) / 3 ) * (int)ceil( (m - 2) / 3 ) << "\n";
	}
}