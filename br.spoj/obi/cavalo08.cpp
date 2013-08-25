#include <iostream>
#include <cstring>

using namespace std;

int cavalo08() {
	int m, n, cont = 0;
	bool tabuleiro[1001][1001];
	memset(tabuleiro, true, sizeof(tabuleiro));

	cin >> m >> n;

	if (m == 1) {
		cout << n;
	}

	if (m == 2) {
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < m; i++) {
				if (tabuleiro[i][j]) {
					cont++;
					tabuleiro[i - 2][j + 1] = false;
					tabuleiro[i - 1][j + 2] = false;
					tabuleiro[i + 1][j + 2] = false;
					tabuleiro[i + 2][j + 1] = false;
					tabuleiro[i + 2][j - 1] = false;
					tabuleiro[i + 1][j - 2] = false;
					tabuleiro[i - 1][j - 2] = false;
					tabuleiro[i - 2][j - 1] = false;
				}
			}
		}
		cout << cont;
	}

	if (m >= 3) {
		for (int i = 0; i < m; i++) {
			int j = 0;
			if (i % 2 == 1)
				j = 1;
			for (; j < n;) {
				if (tabuleiro[i][j]) {
					cont++;
					tabuleiro[i - 2][j + 1] = false;
					tabuleiro[i - 1][j + 2] = false;
					tabuleiro[i + 1][j + 2] = false;
					tabuleiro[i + 2][j + 1] = false;
					tabuleiro[i + 2][j - 1] = false;
					tabuleiro[i + 1][j - 2] = false;
					tabuleiro[i - 1][j - 2] = false;
					tabuleiro[i - 2][j - 1] = false;
				}
				j += 2;
			}
		}

		cout << cont;
	}

	return 0;
}
