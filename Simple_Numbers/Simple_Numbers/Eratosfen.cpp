#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> Eratosfen(vector <int> mas)
{
	for (int p = 2; p < mas.size(); p++)
	{
		if (mas[p] != 0)
		{
			cout « mas[p] « endl;
			for (int j = p * p; j < mas.size(); j += p)
				mas[j] = 0;
		}
	}

	return mas;
}