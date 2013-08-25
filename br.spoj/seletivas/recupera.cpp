#include <iostream>
#include <cstring>

using namespace std;

int recupera() {
	int n, soma, nums[31], k = 1;
	bool achou;

	while (cin >> n) {
		memset(nums, 0, sizeof(nums));
		soma = 0;
		achou = false;

		for (int i = 0; i < n; i++)
			cin >> nums[i];

		for (int i = 0; i < n; i++) {
			if (soma == nums[i]) {
				achou = true;
				break;
			}

			soma += nums[i];
		}

		cout << "Instancia " << k++ << endl;
		if (!achou)
			cout << "nao achei" << endl << endl;
		else
			cout << soma << endl << endl;
	}

	return 0;
}
