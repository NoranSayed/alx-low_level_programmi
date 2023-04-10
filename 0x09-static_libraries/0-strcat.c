#include "main.h"

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *d, char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (d[i] != '\0')
	{
		i++;
	}

	while (s[j] != '\0')
	{
		d[i] = s[j];
		j++;
		i++;
	}

	d[i] = '\0';
	return (d);
}
