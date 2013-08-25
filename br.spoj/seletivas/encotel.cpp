#include <iostream>

using namespace std;

char converte(char letra) {
	char num;

	switch (letra) {
	case 'A':
	case 'B':
	case 'C':
		num = '2';
		break;
	case 'D':
	case 'E':
	case 'F':
		num = '3';
		break;
	case 'G':
	case 'H':
	case 'I':
		num = '4';
		break;
	case 'J':
	case 'K':
	case 'L':
		num = '5';
		break;
	case 'M':
	case 'N':
	case 'O':
		num = '6';
		break;
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
		num = '7';
		break;
	case 'T':
	case 'U':
	case 'V':
		num = '8';
		break;
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
		num = '9';
		break;
	default:
		num = letra;
		break;
	}

	return num;
}

int encotel() {
	string exp;

	while (cin >> exp) {
		for (int i = 0; i < exp.length(); i++)
			cout << converte(exp[i]);

		cout << endl;
	}

	return 0;
}
