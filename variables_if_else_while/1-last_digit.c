#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -  randomly generates a number
* stored in the var n
* return: Always 0 (succes)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (10 % n == 0)
		printf("%d and is 0\n", n);
	else if (n % 10  > 5)
		printf("%d and is greater than 5\n", n);
	else
		printf("%d and is less than 6 and not 0\n", n);
	return (0);
}
