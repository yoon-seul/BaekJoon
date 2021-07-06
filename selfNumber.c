#include <stdio.h>

int generator(int n) {
	int ten[6]; //자리수를 저장할 array
	int result = n; 
	for (int i = 0; i < 6; i++) {

		ten[i] = n % 10; //자리수 저장
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
		number[i] = generator(i+1);	//생성자 함수 시행
		selfNumber[i] = i + 1;
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if ( selfNumber[i] == number[j]) { //생성자 숫자 거름망
				selfNumber[i] = NULL;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		if (selfNumber[i] != NULL) { //생성자 숫자일때는 print하지 않음
			printf("%d\n", selfNumber[i]);
		}
	}
	
	return 0;
}