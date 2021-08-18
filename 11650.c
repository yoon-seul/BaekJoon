//BaekJoon 11650 by yoonseul at 210818

#include <stdio.h>

typedef struct coordinate {
	int x;
	int y;
};

void swap(int *x, int *y);

int main(void)
{
	int num;
	struct coordinate xy[100000];

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &xy[i].x, &xy[i].y);
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (xy[i].x > xy[j].x) {
				swap(&xy[i].x, &xy[j].x);
			}
		}
	}

	for (int i = 0; i < num; i++) {
		printf("%d %d\n", xy[i].x, xy[i].y);
	}
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}