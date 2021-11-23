
#include <vector>
#include <random>

using namespace std;

int NOD(int a, int b)
{

	int nod = 0;
	for (int i = a; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			nod = i;
			return nod;
		}
	}
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


bool Ferma(int p)
{
	bool prostoe = true;
	int avstepeni = 0, a = 0;

	if (p == 2 || p == 3) {
		return true;
	}
	else if (p < 2)
	{
		return false;
	}



	for (int povt = 0; povt < 20; povt++)
	{

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution <unsigned long long> dis(2, p - 1);
		//rand(); 32767
		a = dis(gen);

		if (NOD(p, a) == 1)
		{
			avstepeni = modpow(a, p - 1, p);
			if (avstepeni != 1)
			{
				prostoe = false;
				return prostoe;
			}
		}
		else
		{
			prostoe = false;
			return prostoe;
		}
	}

	if (prostoe == true)
		return prostoe;

}

