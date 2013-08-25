#include <iostream>
#include <cstdio>

using namespace std;

char palavra[61];

long long anda(int p, char estado, long long valor) {
	if (estado == 'q') {
		if (palavra[p] == 0)
			return valor;
		else
			return anda(p + 1, 'q', 2 * valor);
	} else {
		if (palavra[p] == 0)
			return 0;
		else if (palavra[p] == 'a')
			return anda(p + 1, 'p', valor);
		else
			return anda(p + 1, 'p', valor) + anda(p + 1, 'q', valor);
	}
}

int contagem() {
	int k = 1;
	while (gets(palavra)) {
		cout << "Palavra " << k++ << endl << anda(0, 'p', 1) << endl << endl;
	}

	return 0;
}
