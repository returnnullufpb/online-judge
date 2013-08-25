#include <iostream>

using namespace std;

int costa() {
	int m, n, cont = 0;
	cin >> m >> n;
	char mapa[m][n];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> mapa[i][j];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (mapa[i][j] == '#') {
				if (mapa[i + 1][j] == '.' || mapa[i][j - 1] == '.'
						|| mapa[i - 1][j] == '.' || mapa[i][j + 1] == '.'
						|| i == m - 1 || i == 0 || j == n - 1 || j == 0) {
					cont++;
				}
			}
		}
	}

	cout << cont;

	return 0;
}
