#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char s1[10000], s2[10000];
	scanf("%s", &s1);
	getchar();
	scanf("%s", &s2);
	getchar();
	any(s1, s2);
	
	
}

int any(char s1[], char s2[]) {
	for (int i = 0; s2[i] != '\0' ; i++) {
		int flag = -1;
		for (int j = 0; s1[j] != '\0';j++) {
			if (s1[j]==s2[i]) {
				flag = j;
				break;
			}
		}
		printf("%d\n", flag);
	}
	return 0;
}