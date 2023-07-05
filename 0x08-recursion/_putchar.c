#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the charactor c to std out
 * @c: the charactor to print
 * On errer, -1 is returned, errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1,&c, 1));
}
