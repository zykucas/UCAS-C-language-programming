#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define lim 1000


void main() {
	char x[lim], y[lim];
	int p, n;
	scanf("%s", &x);
	getchar();
	scanf("%s", &y);
	getchar();
	scanf("%d", &p);
	getchar();
	scanf("%d", &n);
	getchar();
	setbits(x, y, p, n);
	printf("%s", &x);
}

int setbits(char x[],char y[],int p,int n) {
	int len = 0;
	for (int i = 0; y[i] != '\0'; i++) {
		len++;
	}
	for (int i = 0; i < n; i++) {
		x[p + i] = y[len - n + i];
	}
	return 0;
}