#include <iostream>

using namespace std;

int aviao() {
	int f, c, e, b;
	cin >> f >> c >> e >> b;

	if ((f - (e - 1)) * c < b)
		cout << "PROXIMO VOO";
	else {
		int fil = b / c;
		int cad = b % c;
		char ca = 'A';
		if (cad == 0)
			cout << e + (fil - 1) << " " << char(ca + (c - 1));
		else
			cout << e + fil << " " << char(ca + (cad - 1));
	}

	return 0;
}
