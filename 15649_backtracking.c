# include <stdio.h>

void series(int arr[], int x, int y, int depth)
{
	for (int i = 1; i < x + 1; i++) {
		int n = 0;
		
		if (depth == 0)
			arr[0] = i;
		else {
			for (n = 0; n < depth; n++) {
				if (arr[n] == i)
					break;
			}
			if (n == depth)
				arr[depth] = i;
			else {
				continue;
			}
		}

		if (y - 1 == depth) {
			for (int i = 0; i < y; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n");
		}
		else {
			series(arr, x, y, depth + 1);
		}
	}
}

int main(void)
{
	int n, m;
	int result[8] = { 0 };
	scanf("%d %d", &n, &m);

	series(result, n, m, 0);
}