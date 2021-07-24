//BaekJoon #15649 by yoonseul at 210724

#include <stdio.h>
#include <stdbool.h>

void series(int x, int y);
int result[8];

int main(void)
{
	int n, m;

	scanf("%d %d", &n, &m);

	series(n, m,0);
}

void series(int x, int y, int depth)
{

	if (depth == 0) {
		for (int i = 0; i < x; i++) {
			result[depth] = i + 1;
			series(x, y - 1, depth + 1);
		}
	}
	else {
		for (int i = 0; i < x; i++) {
			if (result[depth - 1] == i + 1)
				continue;
			else {
				result[depth] = i + 1;
			}
		}
		series(x, y - 1, depth + 1);
	}
	if (y == depth)
		exit(1);
	
}