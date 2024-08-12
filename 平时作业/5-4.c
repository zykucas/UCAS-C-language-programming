#include<stdio.h>

#include<string.h>

int main() {

    int strend(char* s, char* t);

    char s[1000], t[1000];

    int k;

    gets(s);

    gets(t);

    k = strend(s, t);

    if (k == 1) {

        printf("Yes");

    }

    else {

        printf("No");

    }

    return 0;

}


int strend(char* s, char* t) {
    int len1, len2, len, i, j, flag = 1;
    len1 = strlen(s);
    len2 = strlen(t);
    len = len1 - len2;
    for (i = 0; i < len2; i++) {
        j = i + len;
        if (*(s + j) == *(t + i)) {
            flag *= 1;
        }
        else {
            flag *= 0;
        }
    }
    return flag;
}