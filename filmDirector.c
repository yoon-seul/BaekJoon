//BaekJoon #1436 by yoonseul at 210714

#include <stdio.h>
#define TRUE 1
#define FAlSE 0

int endNum(int x);

int main(void)
{
	int num;
	long result=0;
	int count = 0;

	scanf("%d", &num);

	for (int i = 0; i < 1000000; i++) {
		if (endNum(i) == 1) {
			count++;
		}
		if (num == count) {
			result = i;
			break;
		}
	}

	printf("%d", result);
}

int endNum(int x)
{
	int countSix = 0;

	for (int i = 0; i < 9; i++) { //��û��.... 6�� 3���� �ƴ϶� 666�� �پ� �־��¡!
		if (x % 10 == 6) {
			countSix++;
		}
		x /= 10;
	}
	if (countSix >= 3) {
		return 1;
	}
	return 0;
}
