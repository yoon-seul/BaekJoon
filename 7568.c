//BaekJoon 7568 by yoonseul at 210816

#include <stdio.h>

typedef struct howLarge {
	int weight;
	int height;
}HL;

int main(void)
{
	int num;
	struct HL;

	scanf("%d", &num);

	HL person[50];

	for (int i = 0; i < num; i++) {
		scanf("%d %d", person[i].weight, person[i].height);
	}
}