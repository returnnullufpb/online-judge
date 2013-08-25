#include <iostream>
#include <cstring>

using namespace std;

int perdida() {
	int n;
	cin >> n;

	int numeros[n];
	memset(numeros, 0, sizeof(numeros));

	for (int i = 0; i < n - 1; i++) {
		int aux;
		cin >> aux;
		numeros[aux - 1]++;
	}

	for (int i = 0; i < n; i++) {
		if (numeros[i] == 0)
			cout << i + 1;
	}

	return 0;
}
