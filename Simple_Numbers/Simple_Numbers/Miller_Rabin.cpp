#include "Simple_Numbers.h"
#include <cmath>
#include <random>

bool Test_Millera_Rabina(long long n, int k);

vector <int> Miller_Rabin(vector <int> massivich) {
	cout << "How much iterations are you want";
	int k;
	cin >> k;
	vector <int> results;
	results.reserve(massivich.size());
	for (const auto& item : massivich) {
		if (Test_Millera_Rabina(item, k)) {
			results.emplace_back(item);
		}
	}
	return results;
}

template <typename T>
T modpow(T base, T exp, T modulus) {
	base %= modulus;
	T result = 1;
	while (exp > 0) {
		if (exp & 1) result = (result * base) % modulus;
		base = (base * base) % modulus;
		exp >>= 1;
	}
	return result;
}

bool Test_Millera_Rabina(long long n, int k) {
	if (n == 2 || n == 3) {
		return true;
	}
	if (n < 2 || n % 2 == 0) {
		return false;
	}
	long long t = n - 1;
	int s = 0;
	while (t % 2 == 0) {
		t /= 2;
		++s;
	}
	for (int i = 0; i < k; ++i) {
		long long a;
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<unsigned long long> dis(2, n-2);
		a = dis(gen);
		long long x = modpow(a, t, n);
		if (x == 1 || x == n - 1) {
			continue;
		}
		for (int r = 1; r < s; ++r) {
			x = modpow(x, (long long)2, n);
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