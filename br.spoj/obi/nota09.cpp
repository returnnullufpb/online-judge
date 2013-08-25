#include <iostream>

using namespace std;

int nota09() {
	int n;
	cin >> n;

	if (n == 0)
		cout << "E";
	else if (n > 0 && n <= 35)
		cout << "D";
	else if (n > 35 && n <= 60)
		cout << "C";
	else if (n > 60 && n <= 85)
		cout << "B";
	else
		cout << "A";

	return 0;
}
