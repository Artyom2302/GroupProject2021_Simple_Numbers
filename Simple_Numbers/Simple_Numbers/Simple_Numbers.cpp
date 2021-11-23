#include "Simple_Numbers.h"


vector <int> SearchSimpleNumber(CPPFanAlgorithm Search,vector <int> massiv){
	vector <int> findednumbers;
	auto start = chrono::system_clock::now();
	findednumbers= Search(massiv);
	auto finish = chrono::system_clock::now();
	auto time = chrono::duration_cast<chrono::microseconds>(finish - start).count();
	cout << "algorithm work time(microseconds): " <<time <<endl;
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
//bool PostavteNormMarksPlease(const vector <int>& findedmassiv, const vector <int>& comparedMassiv) {
//	if (equal(findedmassiv.begin(), findedmassiv.end(), comparedMassiv.begin(), comparedMassiv.end()))
//	{
//		return true;
//	}
//	else 
//		return false;
//}


int main()
{
	
	vector < int> massiv,findednumbers;
	massiv=SuperAdvancedMassivGenerationByGeniusOfThisCentury(1000);
	findednumbers=SearchSimpleNumber(FindPrimitiveNumbers,massiv);
	findednumbers = SearchSimpleNumber(Miller_Rabin, massiv);
	findednumbers = SearchSimpleNumber(Eratosfen, massiv);

	massiv = SuperAdvancedMassivGenerationByGeniusOfThisCentury(1000000);
	findednumbers = SearchSimpleNumber(FindPrimitiveNumbers, massiv);
	findednumbers = SearchSimpleNumber(Miller_Rabin, massiv);
	findednumbers = SearchSimpleNumber(Eratosfen, massiv);
	massiv = SuperAdvancedMassivGenerationByGeniusOfThisCentury(10000000);
	findednumbers = SearchSimpleNumber(FindPrimitiveNumbers, massiv);
	findednumbers = SearchSimpleNumber(Miller_Rabin, massiv);
	findednumbers = SearchSimpleNumber(Eratosfen, massiv);
	
	/*auto it = findednumbers.end()-1;
	cout << *it;*/

}
