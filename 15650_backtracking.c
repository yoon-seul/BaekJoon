/*BaekJoon #15650 by yoonseul at 210724~210725, 210729*/

#include <stdio.h>

int n, m;
int result[8] = { 0 };

void series(int arr[], int x, int y, int depth)
{
	for (int i = 0; i < x; i++) {
		int j;
		if (depth == 0) 
			arr[0] = i+1;
		for (j = 1; j < y+1; j++) {
			if (arr[j-1] >= i+1)
				break;
			else{
				arr[j] = i+1;
			}
			
		}
		if (y == depth) {
			for (int k = 0; k < y; k++) {
				printf("%d ", arr[k]);
			}
			printf("\n");
			return 0;
		}
		series(arr, x, y, depth + 1);
	}
}

int main(void)
{
	

	scanf("%d %d", &n, &m);

	series(result, n, m, 0);
}