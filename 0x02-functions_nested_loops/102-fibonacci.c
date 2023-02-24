#include "main.h"
/**
* main - main function entry
*
* Return: int SUCCESS
*/
int main(void)
{
int i;
long t1 = 1;
long t2 = 2;
long t3 = t1 + t2;

printf("%ld, %ld", t1, t2);
for (i = 3; i <= 50; i++)
{
printf(", %ld", t3);
t1 = t2;
t2 = t3;
t3 = t1 + t2;
}
printf("\n");
return (0);
}
