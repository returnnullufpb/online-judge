#include <iostream>

using namespace std;

int primo() {
	int n;
	cin >> n;
	if (n == 2 || n == 3 || n == 5 || n == 7)
		cout << "sim";
	else if ((n < 7) || (n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0)
			|| (n % 7 == 0))
		cout << "nao";
	else
		cout << "sim";

	return 0;
}
