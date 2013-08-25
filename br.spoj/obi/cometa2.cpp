#include <iostream>

using namespace std;

int cometa2() {
	int a;
	cin >> a;

	for (int i = 1986; i <= 10042; i += 76)
		if (i > a) {
			cout << i;
			break;
		}

	return 0;
}
