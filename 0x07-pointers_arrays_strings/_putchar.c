#include "main.h"
#include <unistd>
/**
* _putchar - write the charachter c to student 
*@c: the character to print
*
*Return: On success 1.
Onerror, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
