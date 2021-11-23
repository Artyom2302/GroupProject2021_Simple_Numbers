#pragma once
#include <chrono>
#include <iostream>
#include <vector>
#include <algorithm>
#include <conio.h>
using namespace std;
using CPPFanAlgorithmForNumbers = bool(*)(int x);
using CPPFanAlgorithmForMassiv = vector <int>(*)(vector	<int> x);
bool Perebor(int x);
bool Test_Millera_Rabina( int x);
vector <int> Eratosfen(vector <int>);
vector <int> Atkin(vector <int>);