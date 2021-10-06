#include "main.h"

/**
* _isalpha - letter ( M-n)
* @c: charter checked
* Return: 1 is character is letter, 0 otherwise
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
