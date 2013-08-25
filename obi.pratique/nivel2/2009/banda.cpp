#include <iostream>
#include <cstring>

using namespace std;

int banda() {
	int n, m, x, y, z;
	cin >> n >> m;
	int matriz[n][n];
	memset(matriz, 0, sizeof(matriz));

	for (int i = 0; i < m; i++) {
		cin >> x >> y >> z;
		matriz[x - 1][y - 1] = z;
		matriz[y - 1][x - 1] = z;
	}

	int maximo = -1, soma;
	int a = 0, b = 0, c = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int k = j + 1; k < n; k++) {
				soma = matriz[i][j] + matriz[j][k] + matriz[i][k];
				if (soma > maximo) {
					maximo = soma;
					a = i;
					b = j;
					c = k;
				}
			}

	cout << a + 1 << " " << b + 1 << " " << c + 1;

	return 0;
}
