#include <iostream>

using namespace std;

int poodlemg() {
	int n, p, m;

	while ((cin >> n >> p) && n && p) {
		m = n % p > 0 ? (n / p) + 1 : (n / p);
		if (m <= 6)
			cout << "Poodle" << endl;
		else if (m > 20)
			cout << "Poooooooooooooooodle" << endl;
		else {
			cout << "P";
			for (int i = 0; i < m - 4; i++)
				cout << "o";
			cout << "dle" << endl;
		}
	}

	return 0;
}
