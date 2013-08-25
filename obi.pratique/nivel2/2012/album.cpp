#include <iostream>

using namespace std;

int album() {
	int x, y, l1, h1, l2, h2;
	cin >> x >> y;
	cin >> l1 >> h1;
	cin >> l2 >> h2;

	if (l1 + l2 <= x && max(h1, h2) <= y)
		cout << "S";
	else if (l1 + h2 <= x && max(l2, h1) <= y)
		cout << "S";
	else if (h1 + h2 <= y && max(l1, l2) <= x)
		cout << "S";
	else if (h1 + l2 <= y && max(h2, l1) <= x)
		cout << "S";
	else if (l1 + l2 <= y && max(h1, h2) <= x)
		cout << "S";
	else if (l1 + h2 <= y && max(l2, h1) <= x)
		cout << "S";
	else if (h1 + h2 <= x && max(l1, l2) <= y)
		cout << "S";
	else if (h1 + l2 <= x && max(h2, l1) <= y)
		cout << "S";
	else
		cout << "N";

	return 0;
}
