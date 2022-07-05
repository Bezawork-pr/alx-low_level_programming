#include <unistd.h>
/*Put char writes the character c to the output
 * Return on sucess 1
 * Return on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
