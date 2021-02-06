#include "is_prime.h"
#include <stdio.h>
#include <math.h>

int is_prime()
{
	// unsigned long factor = 3;
	// double limit_sqrt = sqrt(number);
	// unsigned long limit_rounded = ceil(limit_sqrt);

	// if (number < factor)
	// {
	// 	// printf("%lu FAIL\n", number);
	// 	return false;
	// }
	// else
	// {
	// 	for(; factor < limit_rounded; factor+=2)
	// 	{
	// 		// printf("Testing %lu with %lu\n", number, factor);
	// 		if ((factor < 5 && number%factor == 0) ||
	// 			(factor > 5 && factor%3 != 0 && factor%5 != 0 && number%factor == 0))
	// 		{
	// 			// printf("%lu FAIL\n", number);
	// 			return false;
	// 		}
			
	// 	}
	// 	// printf("%lu SUCCESS\n", number);
	// 	return true;
	// }

    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

    return 0;
}
