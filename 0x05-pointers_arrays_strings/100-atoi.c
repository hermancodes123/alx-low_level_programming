#include "main.h"

/**
* _atoi - changes a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/

int _atoi(char *s)

{

int c = 0;
unsigned int num = 0;
int min = 1;
int isi = 0;

while (s[c])
{
if ([s] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
isi = 1;
num = (num * 10) + (s[c] - '0');
c++;
}
if (isi == 1)
{
break;
}
c++;
}
num *= min;
return (num);
}
