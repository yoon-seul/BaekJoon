#include <stdio.h>

int main(void) {
	int input;
	char inputArr[100];
	int sum=0;

	scanf("%d", &input);
	scanf("%s", &inputArr); //input�� �ޱ�
	
	for (int i = 0; i < input; i++) {
		char temp = inputArr[i] - 48; //ASCII CODE�� ���ֱ�
		inputArr[i] = (int)temp;
		sum += inputArr[i]; // �����ֱ�
	}

	printf("%d", sum);
}