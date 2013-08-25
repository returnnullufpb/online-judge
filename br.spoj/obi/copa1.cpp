#include <iostream>

using namespace std;

int copa1() {
	int m, n, aux = 0;
	char qua[8], sem[4], fin[2];
	char c = 'A';

	for (int i = 0; i < 8; i++) {
		cin >> m >> n;

		if (m > n)
			qua[i] = c;
		else
			qua[i] = c + 1;
		c += 2;
	}

	for (int i = 0; i < 4; i++) {
		cin >> m >> n;

		if (m > n)
			sem[i] = qua[aux];
		else
			sem[i] = qua[aux + 1];

		aux += 2;
	}

	aux = 0;

	for (int i = 0; i < 2; i++) {
		cin >> m >> n;

		if (m > n)
			fin[i] = sem[aux];
		else
			fin[i] = sem[aux + 1];
	}

	cin >> m >> n;

	if (m > n)
		cout << fin[0];
	else
		cout << fin[1];

	return 0;
}
