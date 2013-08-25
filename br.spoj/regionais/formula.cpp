#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int formula() {
	int g, p, c, s, k, pt, ma;
	vector<vector<int> > corridas;
	vector<int> corrida, pontuacao;
	int pilotos[100];

	while ((cin >> g >> p) && g && p) {
		corridas.clear();
		for (int i = 0; i < g; i++) {
			corrida.clear();

			for (int j = 0; j < p; j++) {
				cin >> c;
				corrida.push_back(c);
			}
			corridas.push_back(corrida);
		}
		cin >> s;
		for (int i = 0; i < s; i++) {
			pontuacao.clear();
			memset(pilotos, 0, sizeof(pilotos));
			cin >> k;
			vector<int>::iterator it = pontuacao.begin();
			for (int j = 0; j < p; j++) {
				cin >> pt;
				pontuacao.insert(it, pt);
				it = pontuacao.end();
			}

			for (int j = 0; j < g; j++)
				for (int m = 0; m < k; m++)
					pilotos[corridas[j][m] - 1] += pontuacao[m];

			ma = 0;
			for (int j = 0; j < p; j++)
				ma = max(ma, pilotos[j]);

			for (int j = 0; j < p; j++)
				if (pilotos[j] == ma)
					cout << j + 1 << " ";
			cout << endl;
		}
	}
}
