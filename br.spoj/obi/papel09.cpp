#include <iostream>

using namespace std;

int papel09() {
	int c, p, f;

	cin >> c >> p >> f;

	if ((f * c) > p)
		cout << "N";
	else
		cout << "S";

	return 0;
}
