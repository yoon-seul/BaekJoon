//BaekJoon #1427 by yoonseul at 210715

#include <stdio.h>

int main(void)
{
	int input,count=0;
	int num[10];

	scanf("%d", &input);

	for (int i = 0; input > 0; i++) {
		num[i] = input % 10; //�� �ڸ��� �迭�� ����
		input /= 10;
		count++; //�� �ڸ� ������ ����
	}

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count - 1; j++) {
			if (num[j] < num[j + 1]) { //������������ ����
				int temp;
				temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
			}
		}
	}
	for (int i = 0; i < count  ; i++) {
		printf("%d", num[i]);
	}

}