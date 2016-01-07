#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int numOfTests;
	scanf("%d", &numOfTests);
	int a, b, N;
    for (int i = 0; i < numOfTests; ++i) {
    	scanf("%d %d %d\n", &a, &b, &N);
    	int currentSum = a;
    	for (int j = 0; j < N; ++j) {
    		currentSum += (int)pow(2, j) * b;
    		printf("%d ", currentSum);
    	}
    	printf("\n");
    }
    return 0;
}

