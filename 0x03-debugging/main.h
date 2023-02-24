#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
int positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
if (i < 0)
{
printf("%d is negative\n", i);
}
return (0);
}
#endif /* MAIN_H */
