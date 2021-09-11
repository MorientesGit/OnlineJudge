#include<bits/stdc++.h>
using namespace std;


int main() {
	int n, sol;

	cin >> n;
	while (n--) {
		cin >> sol;
		sol *= 567;
		sol /= 9;
		sol += 7492;
		sol *= 235;
		sol /= 47;
		sol -= 498;
		string formatSol = to_string(sol);
		cout << formatSol.at(formatSol.size() - 2) << "\n";
	}
}