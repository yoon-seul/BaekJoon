//BaekJoon #15650 by yoonseul at 210724~210725

#include <stdio.h>

void series(int* arr[], int x, int y, int depth)
{
	for (int i = 0; i <= x; i++) {
		int j;
		if (depth == 0) 
			arr[0] = i+1;
		for (j = 1; j < y+1; j++) {
			if (arr[j] <= i+1)
				break;
			else{
				arr[j] = i+1;
			}
			
		}
		if (j == depth)
			printf("%d ", arr[j]);
		series(&arr, x, y, depth + 1);
	}
}

int main(void)
{
	int n, m;
	int result[8] = { 0 };

	scanf("%d %d", &n, &m);

	series(&result, n, m, 0);
}