#include <stdio.h>

int generator(int n) {
	int ten[6]; //�ڸ����� ������ array
	int result = n; 
	for (int i = 0; i < 6; i++) {

		ten[i] = n % 10; //�ڸ��� ����
		n = n / 10;
		result += ten[i];
	}
	return result;
}


int main(void) {
	int number[10000];
	int selfNumber[10000];
	int result[10000];
	

	for (int i = 0; i < 100; i++) {
		number[i] = generator(i+1);	//������ �Լ� ����
		selfNumber[i] = i + 1;
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if ( selfNumber[i] == number[j]) { //������ ���� �Ÿ���
				selfNumber[i] = NULL;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		if (selfNumber[i] != NULL) { //������ �����϶��� print���� ����
			printf("%d\n", selfNumber[i]);
		}
	}
	
	return 0;
}