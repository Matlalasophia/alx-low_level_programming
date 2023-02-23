#include<stdio.h>
char putcharMethod(char strArr[], int arrL)
{
int x;
for (x = 0; x <= arrL; x++)
{
putchar(strArr[x]'\n');
}
fprintf(stderr, "[Anything]");
return (0); 
}
