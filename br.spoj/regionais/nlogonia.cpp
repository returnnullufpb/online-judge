#include <iostream>

using namespace std;

int nlogonia() {
	int k, n, m, x, y;

	while ((cin >> k) && k) {
		cin >> n >> m;

		for (int i = 0; i < k; i++) {
			cin >> x >> y;

			if (x == n || y == m)
				cout << "divisa" << endl;
			else {
				if (x > n) {
					if (y > m)
						cout << "NE" << endl;
					else
						cout << "SE" << endl;
				} else {
					if (y > m)
						cout << "NO" << endl;
					else
						cout << "SO" << endl;
				}
			}
		}
	}

	return 0;
}
