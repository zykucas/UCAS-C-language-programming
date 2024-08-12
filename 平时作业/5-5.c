#include<stdio.h>
#include<assert.h>

char* my_strncpy(char* str1, const char* str2, int num)
{
	assert(str1 && str2);
	while (num--)
	{
		*(str1 + num) = *(str2 + num);
	}
	return str1;
}

char* my_strncat(char* str1, const char* str2, int num)
{
	assert(str1 && str2);
	char* ret = str1;
	int i = 0;
	while (*(str1++))
	{
		;
	}
	str1--;
	while (i < num)
	{

		*(str1 + i) = *(str2 + i);
		if (*(str2 + num) == 0)
		{
			break;
		}
		i++;
	}
	return ret;
}

int my_strncmp(const char* str1, const char* str2, int num)
{
	assert(str1 && str2);
	int i = 0;
	while (*str1 == *str2 && i < num)
	{
		i++;
		str1++;
		str2++;
	}
	if (i == num)
	{
		return 0;
	}
	else
	{
		return *str1 - *str2;
	}
}

int main()
{
	char s1[] = "abcdef";
	char s2[] = "abfcde";
	printf("%s\n", my_strncpy(s1 + 2, s2, 3));
	printf("%s\n", my_strncat(s1, s1, strlen(s1)));
	printf("%d\n", strncmp(s1, s2, 3));
	return 0;
}
