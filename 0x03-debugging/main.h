#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int positive_or_negative(int n){
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
}
#endif /* MAIN_H */
