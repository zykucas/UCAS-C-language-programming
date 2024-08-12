#include<stdio.h>

int main()
{
    char c;
    int num_blank=0,num_line=0,num_tab=0;
    while((c=getchar())!=EOF)
    {
        if(c==" ") ++num_blank;
        else if(c=='\t') ++num_line;
        else if(c=='\n') ++num_tab;
        printf("%d\n%d\n%d\n",num_blank,num_line,num_tab);
        return 0;
    }
}