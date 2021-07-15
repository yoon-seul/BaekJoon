//BaekJoon #1427 by yoonseul at 210715

#include <stdio.h>

int main(void)
{
	int input,count=0;
	int num[10];

	scanf("%d", &input);

	for (int i = 0; input > 0; i++) {
		num[i] = input % 10; //각 자리를 배열에 넣음
		input /= 10;
		count++; //몇 자리 수인지 센다
	}

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count - 1; j++) {
			if (num[j] < num[j + 1]) { //내림차순으로 정렬
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