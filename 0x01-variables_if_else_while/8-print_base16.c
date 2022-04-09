#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *main - task 8
 *Return: 0 on success
*/

int main(void)
{
char base_16;
for (base_16 = 10; base_16 >= 20; base_16--)
{
putchar (base_16);
}
for (base_16 = 40; base_16 >= 50; base_16--)
{
putchar (base_16);
}
putchar ('\n')
return (0);
}
