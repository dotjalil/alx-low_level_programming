#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
char ch_caps;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch_caps = 'A'; ch_caps <= 'Z'; ch_caps++)
{
putchar(ch_caps);
}
putchar('\n');
return (0);
}
