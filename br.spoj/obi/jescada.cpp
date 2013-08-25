#include <iostream>
#include <cstring>

using namespace std;

int jescada() {
	int n, tp = 10;
	int t[1001];
	memset(t, 0, sizeof(t));

	cin >> n;

	cin >> t[0];
	for (int i = 1; i < n; i++) {
		cin >> t[i];

		if (t[i] < t[i - 1] + 10)
			tp += t[i] - t[i - 1];
		else
			tp += 10;
	}

	cout << tp;

	return 0;
}
