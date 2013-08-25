#include <iostream>

using namespace std;

string converte(string palavra) {
	string num = "";
	int i = 0;
	while (palavra[i]) {
		if (palavra[i] == 'A' || palavra[i] == 'B' || palavra[i] == 'C')
			num += "2";
		else if (palavra[i] == 'D' || palavra[i] == 'E' || palavra[i] == 'F')
			num += "3";
		else if (palavra[i] == 'G' || palavra[i] == 'H' || palavra[i] == 'I')
			num += "4";
		else if (palavra[i] == 'J' || palavra[i] == 'K' || palavra[i] == 'L')
			num += "5";
		else if (palavra[i] == 'M' || palavra[i] == 'N' || palavra[i] == 'O')
			num += "6";
		else if (palavra[i] == 'P' || palavra[i] == 'Q' || palavra[i] == 'R' || palavra[i] == 'S')
			num += "7";
		else if (palavra[i] == 'T' || palavra[i] == 'U' || palavra[i] == 'V')
			num += "8";
		else if (palavra[i] == 'W' || palavra[i] == 'X' || palavra[i] == 'Y')
			num += "9";
		else
			num += "-";
		i++;
	}

	return num;
}

int telefone() {
	string s;
	cin >> s;

	cout << converte(s);

	return 0;
}
