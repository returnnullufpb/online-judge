#include <iostream>

using namespace std;

int altas() {
	int n, k, cont = 0;
	cin >> n >> k;

	if ((n == 1 && k == 1) || (n == 2 && k == 2))
		cout << k;
	else {
		for (int i = 0; i < k; i++) {
			if (n == 1)
				break;

			if (n % 2 == 0)
				n /= 2;
			else
				n = (n + 1) / 2;
			cont++;
		}

		if (n != 1)
			cont += n - 1;

		cout << cont;
	}

	return 0;
}
