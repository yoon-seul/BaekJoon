#include <stdio.h>

long sqr(long x) // �����ϴ� �Լ�
{
	long result = x * x; 
	return result;
}

void sortArray(long *x, int y) //������������ �����ϴ� �Լ�
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

	while (triangle[0] != 0 && triangle[1] != 0 && triangle[2] != 0) { // 0 0 0�� �ԷµǱ� ������ �ݺ��ʿ�

		scanf("%ld %ld %ld", &inputA, &inputB, &inputC);
		long triangle[3] = { inputA,inputB,inputC }; //���� ���̰� �� ���� ã�� ���� �迭�� �ִ´�
		
		if (triangle[0] == 0 && triangle[1] == 0 && triangle[2] == 0) { //���� ����
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
