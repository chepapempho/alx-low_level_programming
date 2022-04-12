#include "main.h"

/* 
*main - task 1
* Return: 0 on success
*/

void print_alphabet(void)
{
	char alphabet;
	for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
