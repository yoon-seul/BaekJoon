//BaekJoon 7568 by yoonseul at 210816

#include <stdio.h>

typedef struct howLarge {
	int weight;
	int height;
	int series;
}HL;

int compare(int w, int x, int y, int z);

int main(void)
{
	int num;
	struct HL;
	HL person[50];

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &person[i].weight, &person[i].height);
	}

	for (int i = 0; i < num; i++) {
		int count = 1;
		for (int j = 0; j < num; j++) {
			int result = compare(person[i].weight, person[j].weight, person[i].height, person[j].height);
			if (result == -1)
				count++;
		}
		person[i].series = count;
	}


	for (int i = 0; i < num; i++) {
		printf("%d ", person[i].series);
	}
}

int compare(int w, int x,int y, int z)
{
	if (w > x && y > z)
		return 1;
	if (w < x && y < z)
		return -1;
	else {
		return 0;
	}
}