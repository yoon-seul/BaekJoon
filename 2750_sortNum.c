//BaekJoon #2750 by yoonseul at 210714

#include <stdio.h>

int main(void)
{
	int input;
	int sort[1000];

	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf("%d", &sort[i]);
	} //¶ö¶ó ÄÚµù °øºÎ Áñ°Å¿ö ¿Ö Áö¶öÀÌ¾ß ¶Ç ÇÏÇÏ ¹Ùº¸ &¸¦ »©¸Ô¾ùÀÚ³ª ¤¾¤¾

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input - 1; j++) {
			if (sort[j] > sort[j + 1]) {
				int temp;
				temp = sort[j + 1];
				sort[j+1] = sort[j];
				sort[j] = temp;
			} 
		}
	}

	for (int i = 0; i < input; i++) {
		printf("%d\n", sort[i]);
	}

}