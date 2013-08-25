#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int oddoreve() {
	int n, npm, nim, npj, nij, mary[100], john[100];

	while ((cin >> n) && n) {
		memset(mary, 0, sizeof(mary));
		memset(john, 0, sizeof(john));
		npm = nim = 0;
		npj = nij = 0;

		for (int i = 0; i < n; i++) {
			cin >> mary[i];
			if (mary[i] % 2 == 0)
				npm++;
			else
				nim++;
		}

		for (int i = 0; i < n; i++) {
			cin >> john[i];
			if (john[i] % 2 == 0)
				npj++;
			else
				nij++;
		}

		cout << n - (min(npm, nij) + min(nim, npj)) << endl;
	}

	return 0;
}
