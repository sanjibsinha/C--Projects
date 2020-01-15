#include <iostream>
#include <string>
using namespace std;

int main() {
  /* code */
  std::cout << "What is the purchase price?" << '\n';
  float price;
  std::cin >> price;
  std::cout << "Sales tax on $" << price << " is ";
  std::cout << "$" << price * 0.04 << '\n';
  return 0;
}
