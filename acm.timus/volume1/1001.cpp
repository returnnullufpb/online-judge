#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int p1001() {
	vector<long long> numeros;
	long long n;

	while (cin >> n) {
		numeros.push_back(n);
	}

	for (int i = numeros.size() - 1; i >= 0; --i) {
		cout << setprecision(4) << fixed << sqrt(double(numeros[i])) << endl;
	}

	return 0;
}
