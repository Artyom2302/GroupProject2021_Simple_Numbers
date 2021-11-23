#include "Simple_Numbers.h"
#include <cmath>
#include <random>




bool Test_Millera_Rabina(int n) {
	int k = 100;
	if (n == 2 || n == 3) {
		return true;
	}
	if (n < 2 || n % 2 == 0) {
		return false;
	}
	int t = n - 1;
	int s = 0;
	while (t % 2 == 0) {
		t /= 2;
		++s;
	}
	for (int i = 0; i < k; ++i) {
		int a;
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<unsigned int> dis(2, n-2);
		//rand(); 32767
		a = dis(gen);
		int x = modpow(a, t, n);
		if (x == 1 || x == n - 1) {
			continue;
		}
		for (int r = 1; r < s; ++r) {
			x = modpow(x, (int)2, n);
			if (x == 1) {
				return false;
			}
			if (x == n - 1) {
				break;
			}
		}
		if (x != n - 1) {
			return false;
		}
	}
	return true;
}