#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {
	int n, k, cont = 0;
	bool achou = false;
	int px, py;
	cin >> n >> k;
	int dicas[k][3];

	for (int i = 0; i < k; i++)
		for (int j = 0; j < 3; j++)
			dicas[i][j] = 0;

	for (int i = 0; i < k; i++)
		cin >> dicas[i][0] >> dicas[i][1] >> dicas[i][2];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int l = 0; l < k; l++) {
				int a = abs(dicas[l][0] - i);
				int b = abs(dicas[l][1] - j);

				if (a + b == dicas[l][2])
					achou = true;
				else
					achou = false;

				if (achou == false)
					break;
			}
			if (achou) {
				px = i;
				py = j;
				cont++;
			}
		}
	}

	if (cont != 1)
		cout << "-1 -1";
	else
		cout << px << " " << py;

	return 0;
}
