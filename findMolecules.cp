#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  /* code */
  std::cout << "Enter mass of hydrocarbon in decimal point value, like 2.33" << '\n';
  float massOfHydrocarbon;
  std::cin >> massOfHydrocarbon;
  std::cout << "Enter number of carbon atoms in positive integer, like 2" << '\n';
  int numberOfCarbonAtoms;
  std::cin >> numberOfCarbonAtoms;
  std::cout << "Enter the number of hydrogen atoms in positive integer, like 3" << '\n';
  int numberOfHydrogenAtoms;
  std::cin >> numberOfHydrogenAtoms;
  const int carbonAMU = 12;
  const int hydrogenAMU = 1;
  long formulaWeightOfOneMole = (numberOfCarbonAtoms * carbonAMU) + (numberOfHydrogenAtoms * hydrogenAMU);
  const double AvogadroNumber = 6.02e23;
  double moleculesInHydrocarbon = (massOfHydrocarbon / formulaWeightOfOneMole) * AvogadroNumber;
  std::cout << massOfHydrocarbon << " grams of hydrocarbon with " << numberOfCarbonAtoms <<
  " \ncarbon atoms and " << numberOfHydrogenAtoms << " hydrogen atoms contain " << moleculesInHydrocarbon;
  return 0;
}
