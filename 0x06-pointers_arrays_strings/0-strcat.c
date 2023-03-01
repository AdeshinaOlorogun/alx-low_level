#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */

char *_strcat(char *dest, char *src) {
	char* ptr = dest;
	while (*ptr != '\0') {
		ptr++;
	}
	while (*src != '\0') {
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return dest;
}

int main() {
	char dest[20] = "Hello, ";
    char src[] = "world!";
    printf("%s\n", _strcat(dest, src));
    return 0;
}
