#include "main.h"

/**
* _strstr - function locate
* @hays: pointer to char
* @need: pointer to char
* Return: 0
*/

char *_strstr(char *hays, char *need)
{
	char *res = hays, *fneed = need;

	while (*hays)
	{
		while (*need)
		{
			if (*hays++ != *need++)
			{
				break;
			}
		}
		if (!*need)
		{
			return (res);
		}
		need = fneed;
		res++;
		hays = res;
	}
	return (0);
}

