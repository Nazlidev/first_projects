#include <iostream>
#include <vector>
#include <string>

// Weight calculation with listing of Planets
double weight_calculation(double Weight = 0.0, int Selection = 0) {

    //Gravity Relation with Earth and PlanetX
    std::vector<double> GravityRelation = { 0.38, 0.91, 0.38, 2.34, 1.06, 0.92, 1.19 };
    std::vector<std::string> PlanetListing = { "[1] Mercury", "[2] Venus", "[3] Mars", "[4] Jupiter", "[5] Saturn", "[6] Uranus", "[7] Neptune" };

    // Get weight and Planet for calculation.
    std::cout << "Hi! Enter your current weight on Earth:";
    std::cin >> Weight;
    // Do until the entry is correct
    while (Weight < 0) {
        std::cout << "Wrong entry, please enter a Positive value for Weight: ";
        std::cin >> Weight;
    }

    std::cout << "Enter a Number for one of the listed Planets:\n";
    for (size_t i = 0; i < PlanetListing.size(); i++) {

        std::cout << PlanetListing[i] << "\n";
    }
    std::cin >> Selection;

    if (Selection >= 1 && Selection <= GravityRelation.size()) {

        if (Selection == 1) {

            Weight = Weight * GravityRelation[Selection - 1];
            std::cout << "Your current weight on Mercury is: " << Weight;

        }
        else if (Selection == 2) {
            Weight = Weight * GravityRelation[Selection - 1];
            std::cout << "Your current weight on Venus is: " << Weight;

        }
        else if (Selection == 3) {
            Weight = Weight * GravityRelation[Selection - 1];
            std::cout << "Your current weight on Mars is: " << Weight;

        }
        else if (Selection == 4) {
            Weight = Weight * GravityRelation[Selection - 1];
            std::cout << "Your current weight on Jupiter is: " << Weight;

        }
        else if (Selection == 5) {
            Weight = Weight * GravityRelation[Selection - 1];
            std::cout << "Your current weight on Saturn is: " << Weight;

        }
        else if (Selection == 6) {
            Weight = Weight * GravityRelation[Selection - 1];
            std::cout << "Your current weight on Uranus is: " << Weight;

        }
        else if (Selection == 7) {
            Weight = Weight * GravityRelation[Selection - 1];
            std::cout << "Your current weight on Neptune is: " << Weight;

        }
        else {
            std::cout << "??.\n";
        }

    }

    return 0;

}

int main() {

    weight_calculation();

}