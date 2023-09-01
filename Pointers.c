#include <stdio.h> // INPUT AND OUTPUT OPERATIONS
#include <math.h> // MATHEMATICAL OPERATIONS
#include <string.h> // STRING MANIPULATIONS
#include <stdlib.h> // DYNAMIC MEMORY



/* PRINT POINTER ADDRESS EXERCISE */

// int main()
// {
//     int a = 5;
//     int *p;

//     p = &a;

//     printf("%p\n", &a);         // ADDRESS OF A
//     printf("%p\n", p);         // ADDRESS OF POINTER (A ADDRESS)
//     printf("%d", *p);         // VALUE OF A THROUGH POINTER
// }





/* PRINT VALUE AND ADDRESS OF VARIABLES EXERCISE */

// int main()
// {
//     int a = 80;
//     int b = 90;

//     printf("Value a: %d\n", a);
//     printf("Address a: %p\n\n", &a);

//     printf("Value of b: %d\n", b);
//     printf("Address of b: %p\n", &b);
// }





/* PASS BY REFERENCE EXERCISE */

// void find_min_max(int num1, int num2, int *pMin, int *pMax)
// {
//     if (num1 > num2)
//     {
//         *pMin = num2;
//         *pMax = num1;
//     }

//     else
//     {
//         *pMin = num1;
//         *pMax = num2;
//     }
// }


// int main()
// {
//     int a, b;
//     int min, max;

//     printf("Enter two different numbers: ");
//     scanf("%d%d", &a, &b);

//     find_min_max(a, b, &min, &max);

//     printf("maximum between %d and %d = %d\n", a, b, max);
//     printf("minimum between %d and %d = %d", a, b, min);
// }
