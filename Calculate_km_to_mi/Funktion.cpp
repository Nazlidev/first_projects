#include <iostream>
#include <string>
#include <vector>

double Calculate_Km_Mi(double Km, double Mi) {

	std::string KmMi = "[1] Kilometers to Miles";
	std::string MiKm = "[2] Miles to Kilometers";
	std::cout << "Hi! Do you want to calculate" << KmMi << " or " << MiKm << "?\n";
	std::cout << "Please enter [1] for " << KmMi << " or [2] for " << MiKm << ": ";
	std::vector<int> Selection;

	std::cin >> Selection;


	return 0;

}