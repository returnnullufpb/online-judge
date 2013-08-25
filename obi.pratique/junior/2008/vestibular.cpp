#include <iostream>

using namespace std;

int vestibular() {
	int nQuestoes, cont = 0;
	string respostas, gabaritos;

	cin >> nQuestoes;
	cin >> gabaritos;
	cin >> respostas;

	for(int i = 0; i < nQuestoes; i++){
		if(respostas[i] == gabaritos[i])
			cont++;
	}

	cout << cont;


	return 0;
}
