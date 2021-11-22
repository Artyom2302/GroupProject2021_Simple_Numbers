#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> Eratosfen(vector <int> massiv)
{
    for (int p = 2; p < massiv.size(); p++)
    {
        if (massiv[p] != 0)
        {
            cout << massiv[p] << endl;
            for (int j = p * p; j < massiv.size(); j += p)
                massiv[j] = 0;
        }
    }

    return massiv;
}
