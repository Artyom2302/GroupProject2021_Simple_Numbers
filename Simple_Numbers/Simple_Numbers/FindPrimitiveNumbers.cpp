#include <vector>

using namespace std;

bool Perebor(int x) {
	bool prostoe = true;
	int d = 2;
	while (d*d<=x)
	{
		if (x % d == 0) {
			prostoe =false;
			break;
		}
		d = d + 1;
	}
	return prostoe;
}

vector <int> FindPrimitiveNumbers(vector <int> massiv) {
	vector <int> finded;
	finded.reserve(massiv.size());
	for (auto& elem : massiv) {
		if (Perebor(elem)) {
			finded.push_back(elem);
		}
	}
	return finded;
}