#include <stdio.h>
#include "main.h"

int get_endianness(void) {
    unsigned int x = 0x12345678;
    char* ptr = (char*)&x;

    /** If the first byte (i.e., the lowest address) is 0x78, the system is little endian.*/
    if (*ptr == 0x78) {
        return 1; /**little endian*/
    } else {
        return 0; /**ig endian*/
    }
}

int main() {
    int result = get_endianness();
    if (result == 1) {
        printf("System is little endian.\n");
    } else {
        printf("System is big endian.\n");
    }
    return 0;
}
