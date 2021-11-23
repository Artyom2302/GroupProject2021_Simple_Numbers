#include "Simple_Numbers.h"


vector <int> SearchSimpleNumber(CPPFanAlgorithmForNumbers Search, const vector <int> &massiv){

	vector <int>finded;
	finded.reserve(massiv.size());
	auto start = chrono::system_clock::now();
	for (int i = 2; i < massiv.size() - 1;i++) {
		if (Search(massiv[i])) {
			finded.push_back(massiv[i]);
		}
	}
	auto finish = chrono::system_clock::now();
	auto time = chrono::duration_cast<chrono::microseconds>(finish - start).count();
	cout << "Algorithm work time(microseconds): " <<time <<endl;
	return	finded;
}


vector <int> SearchSimpleNumber(CPPFanAlgorithmForMassiv Search,const vector <int>& massiv) {

	vector <int>finded;
	finded.reserve(massiv.size());
	auto start = chrono::system_clock::now();
	finded=Search(massiv);
	auto finish = chrono::system_clock::now();
	auto time = chrono::duration_cast<chrono::microseconds>(finish - start).count();
	cout << "Algorithm work time(microseconds): " << time << endl;
	return	finded;
}
vector <int> SuperAdvancedMassivGenerationByGeniusOfThisCentury(int n) {

	vector <int> massiv;
	massiv.reserve(n);
	for (int i = 0; i < n; i++)
	{
		massiv.push_back(i);
	}

	return massiv;
}

//функция сравнения c идеальным алгоритмом
bool PostavteNormMarksPlease(const vector <int>& findedmassiv, const vector <int>& comparedMassiv) {
	if (equal(findedmassiv.begin(), findedmassiv.end(), comparedMassiv.begin(), comparedMassiv.end()))
	{
		return true;
	}
	else 
		return false;
}


int main()
{
	vector <int> idealfinded, findedMiller,findedAtkin,findedErotosfen, massiv;
	massiv=SuperAdvancedMassivGenerationByGeniusOfThisCentury(1000);
	//idealfinded = SearchSimpleNumber(Perebor, massiv);
	//findedAtkin = SearchSimpleNumber(Atkin, massiv);
	//findedErotosfen = SearchSimpleNumber(Eratosfen, massiv);

	massiv = SuperAdvancedMassivGenerationByGeniusOfThisCentury(100000);
	idealfinded = SearchSimpleNumber(Perebor, massiv);
	findedAtkin = SearchSimpleNumber(Atkin, massiv);
	findedErotosfen = SearchSimpleNumber(Eratosfen, massiv);
	findedMiller = SearchSimpleNumber(Test_Millera_Rabina,massiv);
	cout << PostavteNormMarksPlease(idealfinded, findedErotosfen);
}
