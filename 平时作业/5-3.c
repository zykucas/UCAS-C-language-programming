#include <stdio.h>



int main()
{
    char s[10] = "yjy";
    char t[] = "girl";
    strcat(s, t);
    printf("%s\n", s);
    return 0;
}

void strcat(char* s, char* t)
{
    while (*s != '\0')
        s++;
    while (*t != '\0') {
        *s = *t;
        t++;
        s++;
    }
    *s = '\0';
}

