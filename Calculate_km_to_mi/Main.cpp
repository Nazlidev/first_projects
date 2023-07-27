#include <iostream>
#include <string>

double Calculate_Km_Mi(double Km, double Mi) {

	std::string KmMi = "[1] Kilometers to Miles";
	std::string MiKm = "[2] Miles to Kilometers";
	int Selection = 0;
	double Result;

	// Get Selection (Km to Mi) / (Mi to Km)
	std::cout << "Hi! Do you want to calculate" << KmMi << " or " << MiKm << "?\n";
	std::cout << "Please enter your Selection with [1] or [2]:";
	std::cin >> Selection;

	while (Selection <= 0 || Selection > 2)
	{
		std::cout << "Wrong entry please enter [1] or [2]:";
		std::cin >> Selection;
	}
	

	if (Selection == 1) {
		std::cout << "Enter the distance which you want to calculate: ";
		std::cin >> Km;

		Result = Km * 0.62137;
		std::cout << Km << " km = " << Result << " Miles";

	}
	else if (Selection == 2) {
		std::cout << "Enter the distance which you want to calculate: ";
		std::cin >> Mi;

		Result = Mi / 1.6;
		std::cout << Mi << " Miles = " << Result << " km";

	}
	else {
		std::cout << "Entry was invalid. Restart the program.!";
	}


	return 0;

}


int main() {

	Calculate_Km_Mi(0, 0);

}
