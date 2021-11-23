#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
<<<<<<< HEAD
vector <int> Eratosfen( vector <int> mas)
{	
=======
vector <int> Eratosfen(vector <int> mas)
{
>>>>>>> 5723a255ce310f7f15628c35e91ed22e8bfd71e0
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