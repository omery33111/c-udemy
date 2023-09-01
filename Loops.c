#include <stdio.h> // INPUT AND OUTPUT OPERATIONS
#include <math.h> // MATHEMATICAL OPERATIONS
#include <string.h> // STRING MANIPULATIONS
#include <stdlib.h> // DYNAMIC MEMORY



/* ANY NUMBER OF ASTERISKS EXERCISE */

// int main()
// {
//     int number;
//     int i = 0;

//     printf("Enter a number of asterisks to print: ");
//     scanf("%d", &number);

//     while (number > i)
//     {
//         printf("*");
//         i++;
//     }
// }





/* POWER CALCULATOR EXERCISE */

// int main()
// {
//     int number, power;
//     int tempPow;
//     int result = 1;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     printf("In power of: ");
//     scanf("%d", &power);

//     tempPow = power;

//     while (power > 0)
//     {
//         result = result * number;
//         power --;
//     }

//     printf("%d ^ %d = %d", number, tempPow, result);
// }





/* GRADE AVERAGE CALCULATOR EXERCISE */

// int main()
// {
//     int grade;
//     int totalSum = 0, gradesCount = 0;
//     float average;

//     printf("Enter your grades or '-1' to stop: ");
//     scanf("%d", &grade);

//     while (grade != -1)
//     {
//         totalSum = totalSum + grade;
//         gradesCount++;
//         printf("Enter your grades or '-1' to stop: ");
//         scanf("%d", &grade);
//     }

//     average = totalSum / gradesCount;

//     printf("You've entered total of %d grades! \n", gradesCount);
//     printf("Your grade point average is %.3f", average);
// }





/* LEGAL GRADE EXERCISE */

// int main()
// {
//     int grade;

//     printf("Enter a grade in range of 1-100: ");
//     scanf("%d", &grade);

//     while (0 > grade || grade > 100)
//     {
//         printf("Enter a grade in range of 1-100: ");
//         scanf("%d", &grade);
//     }
    
//     printf("Thanks! you've inserted a legit grade of %d.", grade);
// }





/* NUMBER IN POWER OF EXERCISE */

// int main()
// {
//     int number, power;
//     int result = 1;
//     int i;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     printf("In power of: ");
//     scanf("%d", &power);

//     for (i = 1; i <= power; i++)
//     {
//         result = result * number;
//     }
    
//     printf("%d ^ %d = %d", number, power, result);
// }





/* PUNISHMENT EXERCISE */

// int main()
// {
//     int i;

//     for (i = 1; i <= 1000; i++)
//     {
//         printf("I'm sorry for not listening to Vlad!\n");
//     }
// }



// int main()
// {
//     int i = 1;

//     while (i <= 1000)
//     {
//         i++;
//         printf("I'm sorry for not listening to Vlad!\n");
//     }
// }



// int main()
// {
//     int i = 1;

//     do
//     {
//         i++;
//         printf("I'm sorry for not listening to Vlad!\n");
//     } while (i <= 1000);
// }





/* RIGHT ANGLE TRIANGLE EXERCISE */

// int main()
// {
//     int n;
//     int i, j;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//             printf("%d", j);
//             printf("\n");
//     }
// }





/* 10 CENTS OR 1M #2 EXERCISE */

// int main()
// {
//     int i;
//     int quickSum = 1000000;
//     float totalAmount = 0.01;

//     for (i = 1; i <= 30; i++)
//     {
//         printf("Day %d: %.2f\n", i, totalAmount);
//         totalAmount = totalAmount * 2;
//     }

//     printf("Total amount after 30 days is %f", totalAmount);
// }





/* IN RANGE OF NUMBER EXERCISE */

// int main()
// {
//     int number;
//     int i = 1;
    
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     while (number >= i)
//     {
//         printf("%d ", i++);
//     }

//     printf("\n");
//     i--;

//     while (i >= 1)
//     {
//         printf("%d ", i--);
//     }

//     printf("\nFinally we're done.");
// }



// int main()
// {
//     int number;
//     int i;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     for (i = 1; i <= number; i++)
//     {
//         printf("%d ", i);
//     }

//     printf("\n");

//     for (i = number; i >= 1; i--)
//     {
//         printf("%d ", i);
//     }

//     printf("\nFinally we're done.");
// }





/* SUM IN RANGE OF NUMBER EXERCISE */

// int main()
// {
//     int number;
//     int sum = 0;

//     int i;
    
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     for (i = 1; number >= i; i++)
//     {
//         sum = sum + i;
//     }

//     printf("The sum of all numbers in the sequence of 1 to %d is %d", number, sum);
// }



// int main()
// {
//     int number, num_holder;
//     int sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     num_holder = number;

//     while (number >= 1)
//     {
//         sum = sum + number;
//         number--;
//     }

//     printf("The sum of all numbers in the sequence of 1 to %d is %d", num_holder, sum);
// }





/* MULTIPLICATION TABLE EXERCISE */

// int main()
// {
//     int number, multiplicator;
//     int i;
    
//     printf("Enter a number: ");
//     scanf("%d", &number);
    
//     printf("Enter the multiplicator: ");
//     scanf("%d", &multiplicator);

//     for (i = 1; i <= multiplicator; i++)
//     {
//         printf("%d * %d = %d\n", number, i, number * i);
//     }
// }





/* EVEN NATURAL NUMBERS EXERCISE */

// int main()
// {
//     int number;
//     int i;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     for (i = 1; number >= i; i++)
//         printf("%d ", i * 2);
// }



// int main()
// {
//     int number;
//     int i = 2;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     while (number > 0)
//     {
//         printf("%d ", i);

//         i += 2;
//         number = number - 1;
//     }
// }





/* PYRAMID NUMBERS PATTERN EXERCISE */

// int main()
// {
//     int number, i;
//     int x, y;
//     int current_value = 1, blank_spaces;

//     printf("Enter a number (number of rows in pyramid): ");
//     scanf("%d", &number);

//     blank_spaces = number - 1;

//     for (i = 1; number >= i; i++)
//     {
//         for (x = blank_spaces; x >= 1; x--)
//         {
//             printf(" ");
//         }

//         for (y = 1; i >= y; y++)
//         {
//             printf("%d ", current_value);
//             current_value += 1;
//         }

//         printf("\n");
//         blank_spaces--;
//     }
// }





/* SUM THAT DIVISIBLE BY 3 & 5 EXERCISE */

// int main()
// {
//     int number;
//     int sum = 0;
//     int i;

//     printf("Enter a number (Trivial Solution): ");
//     scanf("%d", &number);

//     for (i = 1; number >= i; i++)
//         {
//             if (i % 5 == 0 && i % 3 == 0)
//                 printf("%d can be devided by 5 and 3\n", i);
//                 sum = sum + i;
//         }
//     printf("Sum = %d", sum);
// }



// int main()
// {
//     int number;
//     int sum = 0;
//     int i;

//     printf("Enter a number (Optimal Solution): ");
//     scanf("%d", &number);

//     for (i = 15; number >= i; i = i + 15)
//         {
//                 printf("%d can be devided by 5 and 3\n", i);
//                 sum = sum + i;
//         }
//     printf("Sum = %d", sum);
// }





/* SUM THAT DIVISIBLE BY 3 & 5 EXERCISE */

// int main()
// {
//     int number;
//     int sum = 0;
//     int i;

//     printf("Enter a number (Optimal Solution): ");
//     scanf("%d", &number);

//     for (i = 1; i <= number; i++)
//     {
//         if (i % 5 == 0 || i % 3 == 0)
//         {
//             printf("%d can be devided by either 3 or 5\n", i);
//             sum = sum + i;
//         }
//     }
//     printf("Sum = %d", sum);
// }





/* VERY ASCENDING OR NOT EXERCISE */

// int main()
// {
//     int sequence_size;
//     int previous_value = 0, current_value = 0;

//     int very_ascending_flag = 1;

//     do
//     {
//         printf("Insert size (total size of the sequence): ");
//         scanf("%d", &sequence_size);
//     } while (0 >= sequence_size);

//     {
//         do
//         {
//             printf("Insert value: ");
//             scanf("%d", &current_value);

//             if (current_value < 0)
//                 printf("Number isn't positive!\n");

//             else
//             {
//                 if (current_value <= previous_value)
//                 {
//                     very_ascending_flag = 0;
//                     break;
//                 }

//                 previous_value = current_value;
//                 sequence_size--;
//             }
//         } while (sequence_size > 0);

//         if (very_ascending_flag == 1)
//             printf("This sequence is very ascending!");
//         else
//             printf("This sequence is NOT very ascending!");
//     }
// }





/* SUBTRACTING EVENDIGITSSUM AND ODDDIGITSSUM EXERCISE */

// int main()
// {
//     int number;
//     int even_sum = 0, odd_sum = 0;
//     int current_digit;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     while (number > 0)
//     {
//         current_digit = number % 10;

//         if (current_digit % 2 == 0)
//             even_sum += current_digit;
//         else
//             odd_sum += current_digit;
        
//         number = number / 10;
//     }

//     printf("Even digit sum - Odd digit sum = %d\n", even_sum - odd_sum);
// }





/* SUM OF ODD NUMBERS SEQUENCE EXERCISE */

// int main()
// {
//     int number;
//     int current_value, odd_sum = 0;
//     int i;

//     printf("Enter a number (the number of values in a sequence): ");
//     scanf("%d", &number);

//     for (i = 1; i <= number; i++)
//     {
//         printf("Enter a value: ");
//         scanf("%d", &current_value);

//         if (current_value % 2 == 1)
//             odd_sum += current_value;
//     }

//     printf("Odd sum = %d\n", odd_sum);
// }



// int main()
// {
//     int number;
//     int current_value, odd_sum = 0;
//     int i = 1;

//     printf("Enter a number (the number of values in a sequence): ");
//     scanf("%d", &number);

//     while (number >= i)
//     {
//         printf("Enter a value: ");
//         scanf("%d", &current_value);

//         if (current_value % 2 == 1)
//             odd_sum += current_value;

//         i++;
//     }

//     printf("Odd sum = %d\n", odd_sum);
// }
