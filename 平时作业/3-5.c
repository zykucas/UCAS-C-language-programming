#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int n, b;
	char s[20];
	scanf("%d", &n);
	getchar();
	scanf("%d", &b);
	getchar();
	itob(n, s, b);
	printf("%s", &s);
}
int itob(int n, char* s, int b)
{
	int i = 0;
	while (n / b > 0)
	{
		if (n % b >= 10)
		{
			s[i++] = n % b - 10 + 'A';
		}
		else
		{
			s[i++] = n % b + '0';
		}
		n = n / b;
	}
	if (n > 0)
	{
		if (n % b >= 10)
		{
			s[i++] = n % b - 10 + 'A';
		}
		else
		{
			s[i++] = n % b + '0';
		}
	}
	s[i] = '\0';
	reverse(s);
	return 0;
}

int reverse(char* s)
{
	int n = strlen(s);
	int i;
	char temp;
	for (i = 0; i < n / 2; i++)
	{
		temp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = temp;
	}
	return 0;
}
