#include<stdio.h>
/**
 * main - prints alphabetic in lowercase
 * Return:0
 */
int main(void)
{
char a;
char b;
for (a = 48; a <= 57; a++)
{
      a=a;

for (b = 48; b <= 57; b++)
	{
	putchar(a);
	putchar(b);
	if(a != 57 || b != 57){
	putchar(44);
	}
}
}

putchar('\n');
return (0);
}
