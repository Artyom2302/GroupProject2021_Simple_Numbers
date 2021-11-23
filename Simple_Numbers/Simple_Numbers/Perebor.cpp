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