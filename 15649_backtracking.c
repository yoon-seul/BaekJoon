//BaekJoon #15649 by yoonseul at 210715

#include <stdio.h>

void series(int x, int y);

int main(void)
{
	int inputA, inputB;

	scanf("%d %d", &inputA, &inputB);

	series(inputA, inputB);
}

void series(int x, int y)
{
	int num[8];
	
	for (int i = 0; i < x; i++) {
		num[i] = i + 1;
	}

	for (int i = 0; i < y; i++) {
		printf("%d ",)
	}
}