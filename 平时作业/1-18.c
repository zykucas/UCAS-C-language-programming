#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#define max_length 1000

int main(){
	char line[max_length];
	while (fgets(line, max_length, stdin) != NULL) {
		int length = strlen(line);
		int nospace = 0;
		for (int i = 0; i < length; i++) {
			if (line[i] != ' ' && line[i] != '\t') {
				nospace = 1;
				break;
			}
		}
		if (nospace) {
			int last_index = -1;
			for (int i = length - 1; i >= 0; i--) {
				if (line[i] != ' ' && line[i] != '\t') {
					last_index = i;
					break;
				}
			}
			if (last_index == -1) {
				continue;
			}
			else {
				length = last_index + 1;
			}
		}
		printf("%s", line);
	}
	return 0;





}