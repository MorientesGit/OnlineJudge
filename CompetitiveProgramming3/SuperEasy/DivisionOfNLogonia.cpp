#include<bits/stdc++.h>
using namespace std;


int main() {
	int k, n, m, x, y;

	while (cin >> k && k != 0) {
		cin >> n >> m;
		while (k--) {
			cin >> x >> y;
			if (x == n || y == m) cout << "divisa\n";
			else if (x > n && y > m) cout << "NE\n";
			else if (x > n && y < m) cout << "SE\n";
			else if (x < n && y > m) cout << "NO\n";
			else cout << "SO\n";
		}
	}
}