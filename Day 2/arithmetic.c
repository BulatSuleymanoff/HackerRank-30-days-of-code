#include <stdio.h>

int main()
{
	double originalPrice;
	int tax, tip;
	scanf("%lf %d %d", &originalPrice, &tip, &tax);
	double res = originalPrice + (double)originalPrice * tip / 100 + (double)originalPrice * tax / 100;
	int finalPrice = (res - (int)res < 0.5) ? (int)res : (int)res + 1;
	printf("The final price of the meal is $%d.", finalPrice);
	return 0;
}