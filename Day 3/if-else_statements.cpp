#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	
	if (N % 2)
        std::cout << "Weird";
    else {
        if (N >= 6 && N <= 20)
            std::cout << "Weird";
        else std::cout << "Not Weird";
    }

    return 0;
}