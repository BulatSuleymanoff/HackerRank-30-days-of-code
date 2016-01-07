#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int numOfTests;
	scanf("%d", &numOfTests);
	int a, b, N;
    char ans[1000];
    ans[0] = '\0';
    for (int i = 0; i < numOfTests; ++i) {
    	scanf("%d %d %d\n", &a, &b, &N);
    	int currentSum = a;
        char currentSumS[20];
        currentSumS[0] = '\0';
    	for (int j = 0; j < N; ++j) {
    		currentSum += (int)pow(2, j) * b;
            sprintf(currentSumS, "%d ", currentSum);
    		strcat(ans, currentSumS);
    	}
    	strcat(ans, "\n");
    }
    printf("%s", ans);
    return 0;
}