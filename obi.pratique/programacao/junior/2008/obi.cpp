#include <iostream>

using namespace std;

int obi() {
	int n, p, x, y, cont = 0;
	cin >> n >> p;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		if (x + y >= p)
			cont++;
	}
	cout << cont;

	return 0;
}
