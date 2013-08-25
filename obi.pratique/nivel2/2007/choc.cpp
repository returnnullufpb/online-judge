#include <iostream>

using namespace std;

int choc() {
	int n, aux, soma;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> aux;
		soma += aux - 1;
	}

	cout << soma;

	return 0;
}
