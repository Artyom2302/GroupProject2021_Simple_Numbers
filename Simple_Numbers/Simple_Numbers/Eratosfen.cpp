#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> Eratosfen( vector <int> mas)
{	
	vector <int> massiv;
	massiv.reserve(mas.size());
	mas[1] = 0;
	for (int p = 2; p < mas.size(); p++)
	{
		if (mas[p] != 0)
		{
			for (int j = p * p; j < mas.size(); j += p)
				mas[j] = 0;
		}
	}
	for (int i = 0; i < mas.size(); i++) {
		if (mas[i] != 0) {
			massiv.push_back(mas[i]);
		}
	}

	return massiv;
}