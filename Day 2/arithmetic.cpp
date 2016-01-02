#include <iostream>

int main()
{
	double originalPrice;
	int tax, tip;
	std::cin >> originalPrice >> tip  >> tax;
	double res = originalPrice + (double)originalPrice * tip / 100 + (double)originalPrice * tax / 100;
	int finalPrice = (res - (int)res < 0.5) ? (int)res : (int)res + 1;
	std::cout << "The final price of the meal is $" << finalPrice << ".";
	return 0;
}