#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

void remove_comments(char* str) {
    int index = 0;
    while (str[index] != '\0') {
        if (str[index] == '"' || str[index] == '\'') {
            int quote_count = 1;
            while (quote_count > 0) {
                index++;
                if (str[index] == '\0') {
                    return; 
                }
                if (str[index] == str[index - 1]) {
                    quote_count--;
                }
                else {
                    quote_count++;
                }
            }
        }
        else if (str[index] == '/' && str[index + 1] == '/') {
            int comment_length = strcspn(str + index, "\n"); 
            memmove(str + index, str + index + comment_length, strlen(str + index + comment_length) + 1); // É¾³ý×¢ÊÍÄÚÈÝ
            index += comment_length; 
        }
        else {
            index++;
        }
    }
}
int main() {
    char code[1000]; 
    fgets(code, 1000, stdin); 
    char* token = strtok(code, "\n"); 
    while (token != NULL) {
        remove_comments(token); 
        token = strtok(NULL, "\n");
    }
    printf("%s", code); 
    return 0;
}
