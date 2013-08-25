#include <iostream>

using namespace std;

int telesco2() {
	int a, n, f, ne = 0;
	cin >> a;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> f;

		if (f * a >= 40000000)
			ne++;
	}

	cout << ne;

	return 0;
}
