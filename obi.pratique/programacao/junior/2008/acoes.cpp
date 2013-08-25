#include <iostream>
#define MAX(a, b) a > b ? a : b;

using namespace std;

int acoes() {
	int n, soma, melhor;
	cin >> n;
	int variacoes[n];

	for (int i = 0; i < n; i++)
		cin >> variacoes[i];

	melhor = -9999999999999;
	for (int i = 0; i < n - 3; i++) {
		soma = variacoes[i] + variacoes[i + 1] + variacoes[i + 2]
				+ variacoes[i + 3];

		melhor = max(melhor, soma);
	}

	cout << melhor;

	return 0;
}
