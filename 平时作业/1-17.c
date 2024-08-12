#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define max_length 1000

int main() {
	char line[max_length];
	while (fgets(line, max_length, stdin) != NULL) {
		int length = strlen(line);
		if (length > 80) {
			printf("%s", line);
		}
	}
	return 0;
}
