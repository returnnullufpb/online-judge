#include <iostream>

using namespace std;

int jtacogra() {
	int n, t, v, dt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> t >> v;

		dt += t * v;
	}

	cout << dt;

	return 0;
}
