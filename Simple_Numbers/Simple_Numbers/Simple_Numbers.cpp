#include "Simple_Numbers.h"


vector <int> SearchSimpleNumber(CPPFanAlgorithm Search,vector <int> massiv)
{
	vector <int> findednumbers;
	auto start = chrono::system_clock::now();
	findednumbers= Search(massiv);
	auto finish = chrono::system_clock::now();
	auto time = chrono::duration_cast<chrono::microseconds>(finish - start).count();
<<<<<<< HEAD
<<<<<<< HEAD
	cout << "Время работы алгоритма: " << time;
=======
	cout << "algorithm work time(milliseconds): " <<time <<endl;
>>>>>>> 329f07dd24e330d88e855a0ed627962d06c97fc9
=======
	cout << "algorithm work time(milliseconds): " <<time <<endl;
>>>>>>> 329f07dd24e330d88e855a0ed627962d06c97fc9
	return findednumbers;
}
vector <int> SuperAdvancedMassivGenerationByGeniusOfThisCentury(int n) {

	vector <int> massiv;
	massiv.reserve(n);
	for (int i = 0; i < n-1; i++)
	{
		massiv.push_back(i + 2);
	}

	return massiv;
}

//функция сравнения c идеальным алгоритмом
//bool PostavteNormPointPlease(const vector <int>& findedmassiv, const vector <int>& comparedMassiv) {
//	if (equal(findedmassiv.begin(), findedmassiv.end(), comparedMassiv.begin(), comparedMassiv.end()))
//	{
//		return true;
//	}
//	else 
//		return false;
//}


int main()
{
<<<<<<< HEAD
<<<<<<< HEAD
	setlocale(LC_ALL, "RUS");
=======
	
>>>>>>> 329f07dd24e330d88e855a0ed627962d06c97fc9
	vector < int> massiv,findednumbers;
	massiv=SuperAdvancedMassivGenerationByGeniusOfThisCentury(100000);
	findednumbers=SearchSimpleNumber(FindPrimitiveNumbers,massiv);
<<<<<<< HEAD
	findednumbers=SearchSimpleNumber(Eratosfen, massiv);
	return 0;
=======
=======
	
	vector < int> massiv,findednumbers;
	massiv=SuperAdvancedMassivGenerationByGeniusOfThisCentury(100000);
	findednumbers=SearchSimpleNumber(FindPrimitiveNumbers,massiv);
>>>>>>> 329f07dd24e330d88e855a0ed627962d06c97fc9
	massiv = SuperAdvancedMassivGenerationByGeniusOfThisCentury(1000000);
	findednumbers = SearchSimpleNumber(FindPrimitiveNumbers, massiv);
	massiv = SuperAdvancedMassivGenerationByGeniusOfThisCentury(10000000);
	findednumbers = SearchSimpleNumber(FindPrimitiveNumbers, massiv);

<<<<<<< HEAD
>>>>>>> 329f07dd24e330d88e855a0ed627962d06c97fc9
=======
>>>>>>> 329f07dd24e330d88e855a0ed627962d06c97fc9

}
