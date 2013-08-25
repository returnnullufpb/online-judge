#include <iostream>

using namespace std;

int autoe() {
	int c, cont = 0;
	char temp;

	cin >> c;

	for (int var = 0; var < c; ++var) {
		cin >> temp;

		switch (temp) {
		case 'P':
		case 'C':
			cont += 2;
			break;
		case 'A':
			cont++;
			break;
		}
	}

	cout << cont;

	return 0;
}
