#include <iostream>

using namespace std;

int jgarcom() {
	int n, l, c, ncc = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> l >> c;

		if (l > c)
			ncc += c;
	}

	cout << ncc;

	return 0;
}
