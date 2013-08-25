#include <iostream>

using namespace std;

int calculaf91(int n) {
	if (n > 100)
		return n - 10;
	else
		return calculaf91(calculaf91(n + 11));
}

int f91() {
	int n;

	while ((cin >> n) && n)
		cout << "f91(" << n << ") = " << calculaf91(n) << endl;

	return 0;
}
