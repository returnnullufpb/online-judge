#include <iostream>

using namespace std;

int pedagio1() {
	int l, d, k, p;
	cin >> l >> d;
	cin >> k >> p;

	cout << (l * k) + ((l / d) * p);

	return 0;
}
