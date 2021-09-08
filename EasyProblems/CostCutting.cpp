#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;

	cin >> t;
	for(int i = 1; i <= t; i++){
		vector<int> employees(3);
		cin >> employees[0] >> employees[1] >> employees[2];
		sort(employees.begin(), employees.end());
		cout << "Case " << i << ": " << employees[1] << "\n";
	}
}