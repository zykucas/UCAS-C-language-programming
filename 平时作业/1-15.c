#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int fahr;
	scanf("%d", &fahr);
	change(fahr);
}

float change(int fahr) {
	float celsius;
	celsius = 5.0 * (fahr-32.0) / 9.0;
	printf("%f",celsius);
	


}