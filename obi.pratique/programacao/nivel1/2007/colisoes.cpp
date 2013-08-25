#include <iostream>

using namespace std;

int colisoes() {
	int x0, y0, x1, y1;
	int x2, y2, x3, y3;
	cin >> x0 >> y0 >> x1 >> y1;
	cin >> x2 >> y2 >> x3 >> y3;

	if (y2 > y3 || x1 < x2 || y3 < y0 || x3 < x0)
		cout << 0;
	else
		cout << 1;

	return 0;
}
