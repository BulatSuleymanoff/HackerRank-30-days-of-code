#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numOfTests;
    cin >> numOfTests;
    int a, b, N;
    for (int i = 0; i < numOfTests; ++i) {
    	cin >> a >> b >> N;
    	int currentSum = a;
    	for (int j = 0; j < N; ++j) {
    		currentSum += pow(2, j) * b;
    		cout << currentSum << ' ';
    	}
    	cout << '\n';
    }
    return 0;
}