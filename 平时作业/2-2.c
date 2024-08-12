#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define lim 100000

void main() {
	int c;
	scanf("%s", &c);
	getchar();
	char s[lim];
	for (i = 0; i < lim - 1; i++) {
		if (c == '\n') {
			s[i] = s[i];
		}
		else if (c == EOF) {
			s[i] = s[i];
		}
		else {
			s[i] = c;
		}

	}
}