#include <iostream>
#include <map>

using namespace std;

int placar() {
	int n, p, mp, k = 1;
	string nome, nmp;
	map<string, int> alunos;

	while (cin >> n) {
		alunos.clear();
		mp = 10;
		nmp = "";

		for (int i = 0; i < n; i++) {
			cin >> nome >> p;
			alunos.insert(pair<string, int>(nome, p));
			if (p < mp)
				mp = p;
		}

		map<string, int>::iterator it = alunos.end();
		for (--it; it != alunos.begin(); it--)
			if (it->second == mp) {
				nmp = it->first;
				break;
			}

		cout << "Instancia " << k++ << endl;
		if (nmp != "")
			cout << nmp << endl << endl;
		else
			cout << alunos.begin()->first << endl << endl;
	}

	return 0;
}
