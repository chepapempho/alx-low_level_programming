#include "main.h"
/*
*print_alphabet_x10 - - print lowercase a to z 10 times
*main - task 2
*Return: void function returns nothing
*/
void print_alphabet_x10(void)
{
char alphabet;
int i;
for (i = 0; i <= 10; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar (alphabet);
}
}
_putchar ('\n');
}
