#include <stdio.h>

int main(void) {
	int input;
	char inputArr[100];
	int sum=0;

	scanf("%d", &input);
	scanf("%s", &inputArr); //input값 받기
	
	for (int i = 0; i < input; i++) {
		char temp = inputArr[i] - 48; //ASCII CODE값 빼주기
		inputArr[i] = (int)temp;
		sum += inputArr[i]; // 더해주기
	}

	printf("%d", sum);
}