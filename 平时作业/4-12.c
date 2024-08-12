#include<stdio.h>

void itoa(int n, char* s)
{
    static int i;
    if (n / 10)
        itoa(n / 10, s);
    else {
        i = 0;
        if (n < 0)
            s[i++] = '-';
    }

    if (n < 0) {
        n = -n;
    }
    s[i++] = n % 10 + '0';
    s[i] = '\0';
}

int main()
{
    char s[100];
    int n = 1232;
    itoa(n, s);
    printf("%s\n", s);
    return 0;
}