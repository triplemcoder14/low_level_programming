#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void) {
    unsigned int x = 0x12345678;
    char* ptr = (char*)&x;

  
    if (*ptr == 0x78) {
        return 1; /** little endian */
    } else {
        return 0; /** big endian */
    }
}
