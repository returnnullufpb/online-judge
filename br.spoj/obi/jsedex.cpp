#include <iostream>
#include <cmath>

using namespace std;

int jsedex() {
	int n, a, l, p;
	cin >> n;
	cin >> a >> l >> p;

	if (min(p, min(a, l)) >= n)
		cout << "S";
	else
		cout << "N";

	return 0;
}
