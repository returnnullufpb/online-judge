#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int aero() {
	int a, v, x, y, mta, n = 1;
	int aero[101];

	while ((cin >> a >> v) && a && v) {
		mta = 0;
		memset(aero, 0, sizeof(aero));

		for (int i = 0; i < v; i++) {
			cin >> x >> y;
			aero[x - 1]++;
			aero[y - 1]++;
			mta = max(mta, max(aero[x - 1], aero[y - 1]));
		}

		cout << "Teste " << n++ << endl;
		for (int i = 0; i < a; i++)
			if (aero[i] == mta)
				cout << i + 1 << " ";

		cout << endl << endl;
	}

	return 0;
}
