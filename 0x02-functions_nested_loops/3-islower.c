#include "main.h"
/* _Islower - checks for lowercase character
*
* Return: 1 sucess or 0 when no sucess
*
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
