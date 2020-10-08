#include <stdio.h>
#include"fact.h"
int main() {
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
    long int m;
    printf("Enter a positive integer: ");
    scanf("%d",&m);
    printf("Factorial of %d = %ld", m, multiplyNumbers(m));   
}
    return 0;
}
