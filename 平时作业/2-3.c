#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define lim 100000

void main() {
	char c[lim];
	scanf("%s", &c);
	getchar();
	int num = htoi(c);
	printf("%d", num);
}

int htoi(char str[]) {
    int i = 0, j = 0, num = 0, sum = 0;
    int len = strlen(str);
    
    if (str[1] == 'x' || str[1] == 'X') {
        str[1] = '0';
        }
    
        while (str[i] != '\0')
        {
            if (str[i] >= '0' && str[i] <= '9')
                num = str[i] - '0';
            else if (str[i] >= 'a' && str[i] <= 'f')
                num = str[i] - 'a' + 10;
            else if (str[i] >= 'A' && str[i] <= 'F')
                num = str[i] - 'A' + 10;
            else
                break;
            for (j = 0; j < len - 1; j++)
            {
                num = num * 16;
            }
            sum += num;
            i++;
            len--;
        }
    
    
    return sum;
   
}