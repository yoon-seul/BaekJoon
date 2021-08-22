//SKKU mock_test 1 by yoonseul at 210822

#include <stdio.h>

int main(void)
{
	int length, pieces;
	int x, y;
	int sum = 0;

	scanf("%d", &length);
	scanf("%d", &pieces);

	for (int i = 0; i < pieces; i++) {
		scanf("%d %d", &x, &y);
		sum = sum + x + y;
	}

	int result = sum / length;

	printf("%d", result);
}