#include <iostream>
#include <cstring>

using namespace std;

int chuva11() {
	int n, v;
	cin >> n;
	int regioes[n][n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> regioes[i][j];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> v;
			regioes[i][j] += v;
		}

	for (int i = 0; i < n; i++) {
		cout << regioes[i][0];
		for (int j = 1; j < n; j++)
			cout << " " << regioes[i][j];

		cout << endl;
	}

	return 0;
}
