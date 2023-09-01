#include <stdio.h> // INPUT AND OUTPUT OPERATIONS
#include <math.h> // MATHEMATICAL OPERATIONS
#include <string.h> // STRING MANIPULATIONS
#include <stdlib.h> // DYNAMIC MEMORY



/* PRINTING WITH DIFFERENT FUNCTIONS EXERCISE */

// void printGreetings()
// {
//     printf("Hello!\n");
//     printf("Welcome to the best course ever!\n");
//     printf("Good luck!\n");
// }


// int main()
// {
//     printf("Hello to this program. I'm writing through main function.\n");

//     printGreetings();

//     printf("Now I'm after the function. Also at 'main'.\n");

//     return 0;
// }





/* MAXIMUM BETWEEN 2 NUMBERS EXERCISE */

// void print_min_max(int n1, int n2)
// {
//     if (n1 > n2)
//     {
//         printf("Maximum is '%d'.\n", n1);
//         printf("Minimum is '%d'.", n2);
//     }
//     else
//     {
//         printf("Maximum is '%d'.\n", n2);
//         printf("Minimum is '%d'.", n1);
//     }
// }


// int main()
// {
//     int a, b;

//     printf("Enter 2 numbers: ");
//     scanf("%d%d", &a, &b);

//     print_min_max(a, b);

//     return 0;
// }





/* MAXIMUM BETWEEN 3 NUMBERS EXERCISE */

// int print_max()
// {
//     int n1, n2, n3;

//     printf("Enter 3 numbers: ");
//     scanf("%d%d%d", &n1, &n2, &n3);

//     if (n1 > n2)
//         if(n1 > n3)
//             return n1;
//         else
//             return n3;

//     else if (n2 > n3)
//         return n2;

//     else
//         return n3;
// }


// int main()
// {
//     int max;

//     max = print_max();
//     printf("%d is the higher number.", max);

//     return 0;
// }





/* 3 NUMBER AVERAGE EXERCISE */

// float find_average(int grade1, int grade2, int grade3)
// {
//     float avg;

//     avg = (grade1 + grade2 + grade3) / 3.0;

//     return avg;
// }


// int main()
// {
//     int g1, g2, g3;

//     printf("Enter 3 numbers: ");
//     scanf("%d%d%d", &g1, &g2, &g3);

//     printf("Average = %.2f", find_average(g1, g2, g3));

//     return 0;
// }





/* FIND RECTANGLE AREA EXERCISE */

// float rectangle_area(float Height, float Width)
// {
//     float area;

//     area = Height * Width;

//     return area;
// }


// int main()
// {
//     float Height, Width;
//     float area;

//     printf("Enter height and width to get rectangle area: ");
//     scanf("%f%f", &Height, &Width);

//     area = rectangle_area(Height, Width);

//     printf("Rectangle area is = %.2f", area);

//     return 0;
// }





/* 2 DIGIT NUMBER MAXIMUM EXERCISE */

// int find_maximum(int number)
// {
//     int tens, units;

//     if (number > 99 || number < 10)
//         printf("'%d' is not double-digit number.", number);

//     else
//     {
//         units = number % 10;
//         tens = number / 10;

//         if (units > tens)
//         {
//             printf("Maximum digit in %d is %d", number, number % 10);
//         }
//         else
//             printf("Maximum digit in %d is %d", number, number / 10);
//     }
// }


// int main()
// {

//     find_maximum(76);

//     return 0;
// }





/* CALCULATE FACTORIAL EXERCISE */

// int calc_factorial(int number)
// {
//     int i;
//     int result = 1;

//     if (0 > number)
//         return -1;
    
//     for (i = 1; i <= number; i++)
//     {
//         result = result * i;
//     }

//     return result;
// }


// int main()
// {
//     int num;
//     int factorial;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     factorial = calc_factorial(num);

//     printf("Factorial(%d) = %d", num, factorial);

//     return 0;
// }





/* CALCULATE FACTORIAL EXERCISE */

// int is_even(int number)
// {
//     if (number > 0)
//     {
//         if (number % 2 == 0)
//             return number;
//         return 0;
//     }

//     else
//     {
//         printf("Wrong value!");
//         return -1;
//     }
// }


// int main()
// {
//     int num;
//     int if_even;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if_even = is_even(num);

//     if (num % 2 == 1)
//         printf("%d is odd!", num);

//     else
//         printf("%d is even!", if_even);

//     return 0;
// }





/* SEQUENCE OF 9S EXERCISE */

// int nine_number(int length)
// {
//     int number = 0;
//     int i;

//     for (i = 0; i < length; i++)
//     {
//         number = number * 10 + 9;
//     }

//     return number;
// }


// int main()
// {
//     int length_seq;
//     int result;

//     printf("Enter a length for the n-th sequence: ");
//     scanf("%d", &length_seq);

//     result = nine_number(length_seq);

//     printf("Result = %d", result);
// }





/* TO LOWER EXERCISE */

// char to_lower(char letter)
// {
//     if (letter >= 'A' && letter <= 'Z')
//         return letter - 'A' + 'a';
//     else return -1;
// }


/* TO UPPER EXERCISE */

// char to_upper(char letter)
// {
//     if (letter >= 'a' && letter <= 'z')
//         return letter - 'a' + 'A';
//     else return -1;
// }


// int main()
// {
//     int letter;
//     int result;

//     printf("Enter a letter: ");
//     scanf("%d", &letter);

//     result = to_lower(letter);

//     printf("Result = %d", result);
// }
