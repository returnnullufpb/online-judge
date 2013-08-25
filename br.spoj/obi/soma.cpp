#include <iostream>

using namespace std;

int soma() {
	int n, x, total = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;

		total += x;
	}

	cout << total;

	return 0;
}
