#include "Simple_Numbers.h"


int modpow(int a, int b, int n) {
 long long x = 1, y = a;
 while (b > 0) {
	 if (b % 2 == 1) {
		 x = (x * y) % n;
	 }
	 y = (y * y) % n;
	 b /= 2;
 }
 return x % n;
}

//функция сравнения c идеальным алгоритмом
bool PostavteNormMarksPlease(const vector <int>& findedmassiv, const vector <int>& comparedMassiv) {
	return (equal(findedmassiv.begin(), findedmassiv.end(), comparedMassiv.begin(), comparedMassiv.end()));
	
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
void PrimeCheck(CPPFanAlgorithmForNumbers Search,int n,string funname) {
	auto start = chrono::system_clock::now();
	bool prime=Search(n);
	auto finish = chrono::system_clock::now();
	auto time = chrono::duration_cast<chrono::microseconds>(finish - start).count();
	cout << "Algorithm " << funname << " work time(microseconds) : " << time << endl<<endl;
	prime ? cout << funname << ": " << "prime\n" : cout << funname << ": " << "not prime\n\n";
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
		if (n > 0){
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
		}
	
	} while (n>0);

	do {
		
		cout << "Enter the check value: ";
		cin >> n;
		if (n>0) {
			PrimeCheck(Perebor, n, "Perebor");
			PrimeCheck(Test_Millera_Rabina, n, "Test_Millera_Rabina");
			PrimeCheck(Ferma, n, "Test Ferma");
		}
		
		
	} while (n > 0);



	
}
