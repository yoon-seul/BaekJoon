#include <stdio.h>

long sqr(long x) // 제곱하는 함수
{
	long result = x * x; 
	return result;
}

void sortArray(long *x, int y) //오름차순으로 정렬하는 함수
{
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3 - i; i++) {
			if (x[i] > x[i + 1]) {
				long temp;
				temp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = temp;
			}
		}
	}
	
}

int main(void)
{
	long inputA, inputB, inputC;

	long triangle[3] = { 1,1,1 };

	while (triangle[0] != 0 && triangle[1] != 0 && triangle[2] != 0) { // 0 0 0이 입력되기 전까지 반복필요

		scanf("%ld %ld %ld", &inputA, &inputB, &inputC);
		long triangle[3] = { inputA,inputB,inputC }; //가장 길이가 긴 변을 찾기 위해 배열에 넣는다
		
		if (triangle[0] == 0 && triangle[1] == 0 && triangle[2] == 0) { //실행 종료
			return 0;
		}

		sortArray(&triangle, 3);


		long resultSum = sqr(triangle[0]) + sqr(triangle[1]); //b^2+c^2

		if (sqr(triangle[2]) == resultSum) {
			printf("right\n");
		}
		else {
			printf("wrong\n");
		}
	}
}
