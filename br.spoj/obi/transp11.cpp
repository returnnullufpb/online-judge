#include <iostream>

using namespace std;

int transp11() {
	int a, b, c, x, y, z;

	cin >> a >> b >> c;
	cin >> x >> y >> z;

	cout << (x / a) * (y / b) * (z / c);

	return 0;
}
