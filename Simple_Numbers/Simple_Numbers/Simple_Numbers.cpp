#include "Simple_Numbers.h"

//функция сравнения c идеальным алгоритмом
bool PostavteNormMarksPlease(const vector <int>& findedmassiv, const vector <int>& comparedMassiv) {
	if (equal(findedmassiv.begin(), findedmassiv.end(), comparedMassiv.begin(), comparedMassiv.end()))
	{
		return true;
	}
	else
		return false;
}

vector <int> SearchSimpleNumber(CPPFanAlgorithmForNumbers Search, const vector <int> &massiv, string funname){

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
	cout << "Algorithm "<<funname<<" work time(microseconds): " <<time <<endl;
	return	finded;
}


vector <int> SearchSimpleNumber(CPPFanAlgorithmForMassiv Search,const vector <int>& massiv,string funname) {

	vector <int>finded;
	finded.reserve(massiv.size());
	auto start = chrono::system_clock::now();
	finded=Search(massiv);
	auto finish = chrono::system_clock::now();
	auto time = chrono::duration_cast<chrono::microseconds>(finish - start).count();
	cout << "Algorithm "<<funname<< " work time(microseconds) : " << time << endl;
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




int main()
{	///
	vector <int> idealfinded, findedMiller,findedAtkin,findedErotosfen,findedFerma, massiv;
	int n;
	
	do
	{
		cout << "Enter the value of the array ";
		cin >> n;
		massiv = SuperAdvancedMassivGenerationByGeniusOfThisCentury(n);
		idealfinded = SearchSimpleNumber(Perebor, massiv, "Perebor");

		findedErotosfen = SearchSimpleNumber(Eratosfen, massiv, "Eratosfen");
		PostavteNormMarksPlease(idealfinded, findedErotosfen) ? cout << "\nSame\n" : cout << "\nNot same\n";

		findedAtkin = SearchSimpleNumber(Atkin, massiv, "Atkin");
		PostavteNormMarksPlease(idealfinded, findedAtkin) ? cout << "\nSame\n" : cout << "\nNot same\n";

		findedMiller = SearchSimpleNumber(Test_Millera_Rabina, massiv, "Test_Millera_Rabina");
		PostavteNormMarksPlease(idealfinded, findedMiller) ? cout << "\nSame\n" : cout << "\nNot same\n";

		findedFerma = SearchSimpleNumber(Ferma, massiv, "Test Ferma");
		PostavteNormMarksPlease(idealfinded, findedFerma) ? cout << "\nSame\n" : cout << "\nNot same\n";
	} while (n>-1);

	



	
}
