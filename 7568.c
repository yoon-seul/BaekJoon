//BaekJoon 7568 by yoonseul at 210816

#include <stdio.h>

typedef struct howLarge {
	int weight;
	int height;
	int seriesW;
	int seriesH;
	int series;
}HL;

int main(void)
{
	int num;
	struct HL;
	HL person[50];

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", person[i].weight, person[i].height);
	}

	for (int i = 0; i < num; i++) {
		int count = 0;
		for (int j = 0; j < num; j++) {
			if (person[i].weight < person[j].weight)
				count++;
		}
		person[i].seriesW = count;
	}
	for (int i = 0; i < num; i++) {
		int count = 0;
		for (int j = 0; j < num; j++) {
			if (person[i].height < person[j].height)
				count++;
		}
		person[i].seriesH = count;
	}

	for (int i = 0; i < num; i++) {
		if
	}
}