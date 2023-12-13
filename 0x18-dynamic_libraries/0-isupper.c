#include "main.h"

/**
*_isupper - check if c is upper or not
*@c: input character
*Return:  1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
