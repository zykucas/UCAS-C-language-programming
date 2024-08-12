#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
    char s[100], t[10];
    scanf("%s", &s);
    getchar();
    scanf("%s", &t);
    getchar();
    printf("%d", strrindex(s, t));

}
int strrindex(char s[], char t[])
{
    int i, j, k, pos;

    pos = -1;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k = 0; t[k] != '\0' && (s[j] == t[k]); j++, k++);
        if (k > 0 && t[k] == '\0')
            pos = i;
    }
    return pos;
}