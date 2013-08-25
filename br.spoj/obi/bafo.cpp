#include <iostream>

using namespace std;

int bafo() {
	int r, a, b, na, nb, n = 1;

	while ((cin >> r) && r) {
		na = nb = 0;
		for (int i = 0; i < r; i++) {
			cin >> a >> b;
			na += a;
			nb += b;
		}

		cout << "Teste " << n++ << endl;
		if (na > nb)
			cout << "Aldo" << endl << endl;
		else
			cout << "Beto" << endl << endl;
	}

	return 0;
}
