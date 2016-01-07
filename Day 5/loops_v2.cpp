#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int numOfTests;
    cin >> numOfTests;
    int a, b, N;
    string ans;
    for (int i = 0; i < numOfTests; ++i) {
    	cin >> a >> b >> N;
    	int currentSum = a;
    	for (int j = 0; j < N; ++j) {
    		currentSum += pow(2, j) * b;
            ans += to_string(currentSum) + " ";
    	}
    	ans += (i != numOfTests - 1) ? "\n" : "";
    }
    cout << ans; 
    return 0;
}