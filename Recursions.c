#include <stdio.h> // INPUT AND OUTPUT OPERATIONS
#include <math.h> // MATHEMATICAL OPERATIONS
#include <string.h> // STRING MANIPULATIONS
#include <stdlib.h> // DYNAMIC MEMORY



/* BASIC SUM RECURSION EXAMPLE EXERCISE */

// int sum(int n)
// {
//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//         return n + sum(n - 1);
// }


// int main()
// {
//     int n;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     int result = sum(n);

//     printf("Sum of numbers from 1 to %d is %d\n", n, result);
// }





/* BASIC SUM RECURSION EXAMPLE EXERCISE */

// int factorial(int number)
// {
//     if (number == 0)
//         return 0;
//     else if (number == 1)
//         return 1;
    
//     else
//         return number * factorial(number - 1);
// }


// int main()
// {
//     int n;

//     printf("Enter a positive number: ");
//     scanf("%d", &n);

//     int result = factorial(n);

//     printf("Factorial of numbers from 1 to %d is %d\n", n, result);
// }





/* BASIC SUM RECURSION EXAMPLE EXERCISE */

// int fibonacci(int number)
// {
//     if (number == 0)
//         return 0;
//     if (number == 1)
//         return 1;
    
//     return fibonacci(number - 1) + fibonacci(number - 2);
// }


// int main()
// {
//     int n;

//     printf("Enter a positive number: ");
//     scanf("%d", &n);

//     int result = fibonacci(n);

//     printf("Fibonacci sequence untill '%d' is %d", n, result);
// }





/* SUM OF DIGITS IN A NUMBER EXERCISE */

// int digits_sum(int number)
// {
//     if (number <= 9)
//         return number;

//     return number % 10 + digits_sum(number / 10);
// }


// int main()
// {
//     int n;

//     printf("Enter a positive number: ");
//     scanf("%d", &n);

//     int result = digits_sum(n);

//     printf("Sum of digits in %d is %d", n, result);

// }





/* COUNT OF DIGITS IN A NUMBER EXERCISE */

// int count_num(int number)
// {
//     if (number <= 9)
//         return 1;

//     return 1 + count_num(number / 10);
// }


// int main()
// {
//     int n;

//     printf("Enter a positive number: ");
//     scanf("%d", &n);

//     int result = count_num(n);

//     printf("Total digits in %d is %d", n, result);

// }





/* TOTAL NUMBERS LESS THAN NUMBER EXERCISE */

// int total_smaller(int number)
// {
//     int input;

//     printf("Please enter a number: ");
//     scanf("%d", &input);

//     if (input == -1)
//         return 0;
//     if (input < number)
//         return 1 + total_smaller(number);
    
//     return total_smaller(number);
// }


// int main()
// {
//     int n = 3;

//     int result = total_smaller(n);

//     printf("Total of smaller digits than %d are %d", n, result);
// }





/* TOTAL EVEN NUMBERS IN SEQUENCE EXERCISE */

// int is_even()
// {
//     int input;

//     printf("Enter numbers until (-1): ");
//     scanf("%d", &input);

//     if (input == -1)
//         return 0;
    
//     if (input % 2 == 0)
//         return 1 + is_even();
    
//     return is_even();
// }


// int main()
// {
//     int total = is_even();

//     printf("Total of %d even numbers in your sequence.", total);
// }





/* PRINT ALL NUMBERS UNTIL 'n' EXERCISE */

// int print_scale(int n)
// {
//     if (n >= 1)
//     {
//         print_scale(n - 1);
//         printf("%d ", n);
//     }
// }


// int main()
// {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     printf("All values from 1 to %d are: ", number);

//     print_scale(number);
// }





/* LUCAS SEQUENCE EXERCISE */

// int lucas_recursive(int n)
// {
//     if (n == 0)
//         return 2;
//     if (n == 1)
//         return 1;
    
//     return lucas_recursive(n - 1) + lucas_recursive(n - 2);
// }


// int main()
// {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Lucas value at Index %d = %d", num, lucas_recursive(num));
// }





/* MAXIMUM NUMBER IN SEQUENCE EXERCISE */

// int find_max(int remaining_values)
// {
//     int max_value;

//     if (remaining_values > 0)
//     {
//         int current_value;
//         scanf("%d", &current_value);

//         max_value = find_max(remaining_values - 1);

//         if (current_value > max_value)
//             return current_value;
//         else
//             return max_value;
//     }

//     return remaining_values;
// }

// int main()
// {
//     int num_values;

//     printf("Enter the number of values in the sequence: ");
//     scanf("%d", &num_values);

//     printf("Enter the sequence:\n");
//     int max = find_max(num_values);

//     printf("Maximum number in the sequence is: %d\n", max);
// }





/* MINIMUM NUMBER IN SEQUENCE EXERCISE */

// int find_min(int remaining_values)
// {
//     int min_value;

//     if (remaining_values > 0)
//     {
//         int current_value;
//         scanf("%d", &current_value);

//         min_value = find_min(remaining_values - 1);

//         if (current_value < min_value)
//             return current_value;
//         else
//             return min_value;
//     }

//     return min_value;
// }


// int main()
// {
//     int num_values;

//     printf("Enter the number of values in the sequence: ");
//     scanf("%d", &num_values);

//     printf("Enter the sequence:\n");
//     int min = find_min(num_values);

//     printf("Minimum number in the sequence is: %d\n", min);
// }





/* EVEN DIGITS SUM EXERCISE */

// int digitsSumEven(int n)
// {
//     if (n < 10)
//         if (n & 2 == 0)
//             return 1;
//         else return 0;
    
//     int resultSoFar = digitsSumEven(n / 10);

//     if (n & 10 & 2 == 0)
//         if (resultSoFar == 1)
//             return 1;
//         else return 0;
// }





/* PRINT SEQUENCE OF TOTAL * NUM1 & NUM2 EXERCISE */

// int specialSequencePrint(int total, int num1, int num2)
// {
//     if (total >= 1)
//     {
//         printf("%d", num1);
//         specialSequencePrint(total - 1, num1, num2);
//         printf("%d", num2);
//     }
// }


// int main()
// {
//     specialSequencePrint(3, 5, 9);
//     return 0;
// }





/* PRINT SEQUENCE OF TOTAL * CHAR1 & CHAR2 EXERCISE */

// int specialSequenceCharPrint(int total, char char1, char char2)
// {
//     if (total >= 1)
//     {
//         printf("%c", char1);
//         specialSequenceCharPrint(total - 1, char1, char2);
//         printf("%c", char2);
//     }
// }


// int main()
// {
//     specialSequenceCharPrint(3, 'a', 'b');
//     return 0;
// }





/* DIGITS ASCENDING, DESCENDING, OR NOT EXERCISE */

// int digitsSorted(int num)
// {
//     if (num < 10)
//         return 1; // A single digit number is considered sorted

//     int units = num % 10;
//     int tens = (num / 10) % 10;

//     int sortedSoFar = digitsSorted(num / 10);

//     if (sortedSoFar == 1 && tens <= units)
//         return 1;
//     if (sortedSoFar == -1 && tens >= units)
//         return -1;

//     return 0;
// }

// int main()
// {
//     int number = 12345;

//     int result = digitsSorted(number);

//     if (result == 1)
//         printf("The digits are sorted in ascending order.\n");
//     if (result == -1)
//         printf("The digits are sorted in descending order.\n");
//     else
//         printf("The digits are not sorted.\n");

//     return 0;
// }





/* COUNT OF DIGIT OCCURRENCES OF NUM EXERCISE */

// int digitsEvenAppearences(int num, int digit)
// {
//     int totalAppearSoFar;
//     if (10 > num)
//         if (num != digit)
//             return 1;
//         else
//             return 0;

//     totalAppearSoFar = digitsEvenAppearences(num / 10, digit);

//     if (totalAppearSoFar == 1)
//         if (num % 10 == digit)
//             return 0;
//         else
//             return 1;
    
//     else
//         if (num % 10 == digit)
//             return 1;
//         else
//             return 0;
// }

// int main()
// {
//     int num, digit = 2;
    
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     int result = digitsEvenAppearences(num, digit);
    
//     if (result == 1)
//         printf("Digit %d appears an even number of times.\n", digit);
//     else
//         printf("Digit %d does not appear an even number of times.\n", digit);
    
//     return 0;
// }
