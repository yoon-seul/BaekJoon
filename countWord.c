#include <stdio.h>
#include <ctype.h>

int main(void) {
	char input[1000000];
	int countSpace = 0;
	int wordCount;
	
	scanf("%[^\n]s", &input);

	if (input[0] = ' ') {
		countSpace -= 1; //맨 앞이 빈칸인 경우,
	}
	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] == ' ') {
			countSpace += 1;
		}
		if (input[i + 1] == '\0' && input[i] == ' ') {
			countSpace -= 1;
		}
	}
	wordCount = countSpace + 1; //단어는 Space 수보다 1개 더 많다.

	printf("%d", wordCount);
}