#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char c1[100], c2[100];
	scanf("%s", &c1);
	getchar();
	scanf("%s", &c2);
	getchar();
	squeeze(c1, c2);
	printf("%s",&c1);
}

int squeeze(char s_1[], char s_2[]) {
	for (int k = 0; s_2[k] != '\0'; k++) {
		int i, j;
		for (i = j = 0; s_1[i] != '\0'; i++) {
			if (s_1[i] != s_2[k]) {
				s_1[j] = s_1[i];
				j++;
			}
		}
		s_1[j] = '\0';
	}
	return 0;

}