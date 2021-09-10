#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
	int t;
	ll a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a < b) cout << "<\n";
		else if (a > b) cout << ">\n";
		else cout << "=\n";
	}
}