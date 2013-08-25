#include <iostream>
#include <cmath>

using namespace std;

int alades() {
	int h1, m1, h2, m2, md;

	while ((cin >> h1 >> m1 >> h2 >> m2) && (h1 || m1 || h2 || m2)) {
		md = 0;

		if (m2 < m1) {
			h2--;
			m2 += 60;
		}
		md += m2 - m1;

		if (h2 < h1)
			h2 += 24;
		md += (h2 - h1) * 60;

		cout << md << endl;
	}

	return 0;
}
