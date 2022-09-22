#include "main.h"

/**
* _strcat - function commute srtings
* @dest: param pointer to a char
* @src: param pointer to a char
* Return: return value of dest
*/
char *_strcat(char *dest, char *src);
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
	    


