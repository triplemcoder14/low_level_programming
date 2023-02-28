#include <stdio.h>
#include <string.h>

int _putchar(char c);

void reverse_print(char *str) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        _putchar(str[i]);
    }
    _putchar('\n');
}
