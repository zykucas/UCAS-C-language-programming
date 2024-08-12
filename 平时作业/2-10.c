#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char c;
	scanf("%c", &c);
	getchar();
	printf("%c", lower(c));
}

int lower(int c) {
	return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}