#include <stdlib.h>
#include <time.h>

/* more headers goes there 
* main - Positive anything is better than negative nothing
*
* Return: Always 0
*
* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d \n", n);
	if (n > 0)
	{
	printf("The number is positive \n");
	}
	else if (n < 0)
	{
	printf("The number is negative \n");
	}
	else (n = 0)
	{
	ptintf("The number is zero \n");
	}
	return (0);
}
