#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

string converte(string palavra) {
	string num = "";
	int i = 0;
	while (palavra[i]) {
		if (palavra[i] == 'i' || palavra[i] == 'j')
			num += "1";
		else if (palavra[i] == 'a' || palavra[i] == 'b' || palavra[i] == 'c')
			num += "2";
		else if (palavra[i] == 'd' || palavra[i] == 'e' || palavra[i] == 'f')
			num += "3";
		else if (palavra[i] == 'g' || palavra[i] == 'h')
			num += "4";
		else if (palavra[i] == 'k' || palavra[i] == 'l')
			num += "5";
		else if (palavra[i] == 'm' || palavra[i] == 'n')
			num += "6";
		else if (palavra[i] == 'p' || palavra[i] == 'r' || palavra[i] == 's')
			num += "7";
		else if (palavra[i] == 't' || palavra[i] == 'u' || palavra[i] == 'v')
			num += "8";
		else if (palavra[i] == 'w' || palavra[i] == 'x' || palavra[i] == 'y')
			num += "9";
		else if (palavra[i] == 'o' || palavra[i] == 'q' || palavra[i] == 'z')
			num += "0";
		i++;
	}

	return num;
}

vector<string> excluirDoVetor(int p, vector<string> vetor) {
	vetor.erase(vetor.begin() + p);
	return vetor;
}

int p1002() {
	string num, palavra;
	vector<string> palavrasConvertidas, palavras;
	int nPalavras;

	while (cin >> num && num != "-1") {
		cin >> nPalavras;
		int p = 0;

		for (int i = 0; i < nPalavras; i++) {
			cin >> palavra;
			palavras.push_back(palavra);
			palavrasConvertidas.push_back(converte(palavra));
		}

		int cont = 0;
		for (int i = 0; i < nPalavras; i++) {
			string numAux = "";

			for (int j = 0; j < palavrasConvertidas[i].size(); i++)
				numAux += num[j];

			if (numAux == palavrasConvertidas[i]) {
				vector<string> aux = excluirDoVetor(i, palavrasConvertidas);

			}
		}
	}

	return 0;
}
