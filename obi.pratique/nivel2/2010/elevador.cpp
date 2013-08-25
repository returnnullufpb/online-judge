#include <iostream>

using namespace std;

int elevador() {
	int n, c, s, e, aux = 0;
	bool b = false;
	cin >> n >> c;

	for (int i = 0; i < n; i++) {
		cin >> s >> e;
		aux -= s;
		aux += e;

		if (aux > c) {
			b = true;
			break;
		}
	}

	if (b)
		cout << "S";
	else
		cout << "N";

	return 0;
}
