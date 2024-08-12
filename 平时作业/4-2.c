#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
    char s[100];
    scanf("%s", &s);
    getchar();
    double a = atof(s);
    printf("%lf", a);
}

double atof( char s[])
{
    double power, val;
    int sign, i, sign2, j, n;
    for (i = 0; isspace(s[i]); i++)
        ;

    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '-' || s[i] == '+')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = val * 10 + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = val * 10 + (s[i] - '0');
        power *= 10;
    }

    
    if (s[i] == 'e' || s[i] == 'E')
    {
        i++;
        sign2 = (s[i] == '-') ? 1 : 0;
        if (s[i] == '-' || s[i] == '+')
            i++;

        for (n = 0; isdigit(s[i]); i++)
            n = n * 10 + (s[i] - '0');

        for (j = 0; j < n; j++)
            power = (sign2) ? (power * 10) : (power / 10);

    }
    

    return val * sign / power;
   
}
