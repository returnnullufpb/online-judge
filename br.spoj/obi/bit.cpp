#include <iostream>

using namespace std;

int bit() {
	int v, n = 1;

	while ((cin >> v) && v) {
		cout << "Teste " << n++ << endl;

		cout << v / 50 << " ";
		v %= 50;

		cout << v / 10 << " ";
		v %= 10;

		cout << v / 5 << " ";
		v %= 5;

		cout << v << endl << endl;
	}

	return 0;
}
