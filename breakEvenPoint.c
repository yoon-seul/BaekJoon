#include <stdio.h>

int main(void) {
	unsigned long long inputA, inputB, inputC;

	scanf("%llu %llu %llu", &inputA, &inputB, &inputC);

	if (inputB >= inputC) {
		printf("%d", -1);
	}
	else {
		unsigned long long result = inputA / (inputC - inputB) + 1;
		printf("%llu", result);
	}
}