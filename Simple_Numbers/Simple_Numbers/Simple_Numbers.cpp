#include <chrono>
#include <iostream>
#include <vector>
using namespace std;

void SearchSimpleNumber(vector <int> (*Search)(vector <int>),vector <int> massiv){
	vector <int> findednumbers;
	auto start = chrono::system_clock::now();
	findednumbers=Search(massiv);
	auto finish = chrono::system_clock::now();
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

void PostavteNormPointPlease(const vector <int>& massiv) {
	for ( auto &elem:massiv)
	{
		cout << elem<<endl;
	}
}


int main()
{
	vector < int> massiv;
	massiv=SuperAdvancedMassivGenerationByGeniusOfThisCentury(100);
	PostavteNormPointPlease(massiv);
	massiv = SuperAdvancedMassivGenerationByGeniusOfThisCentury(10000);
	PostavteNormPointPlease(massiv);
	massiv = SuperAdvancedMassivGenerationByGeniusOfThisCentury(1000000);
	PostavteNormPointPlease(massiv);

}
