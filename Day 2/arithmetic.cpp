#include <iostream>
#include <cmath>

int main()
{
	double originalPrice;
	int tax, tip;
	std::cin >> originalPrice >> tip  >> tax;
	double res = originalPrice + (double)originalPrice * tip / 100 + (double)originalPrice * tax / 100;
	int finalPrice = (int)round(res);
	std::cout << "The final price of the meal is $" << finalPrice << ".";
	return 0;
}