#include <iostream>

using namespace std;

int feynman() {
	int n, nq;

	while ((cin >> n) && n) {
		nq = 0;

		for (int i = 1; i <= n; i++)
			nq += i * i;

		cout << nq << endl;
	}

	return 0;
}
