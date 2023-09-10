#include <stdio.h> // INPUT AND OUTPUT OPERATIONS
#include <math.h> // MATHEMATICAL OPERATIONS
#include <string.h> // STRING MANIPULATIONS
#include <stdlib.h> // DYNAMIC MEMORY



/* CONGRATULATIONS / FAILED EXERCISE */

// int main()
// {
//     int grade;
//     printf("Enter a number: ");
//     scanf("%d", &grade);

//     if (grade >= 60)
//         printf("Congratulations!");
//     else printf("Failed... Please try again.");
// }





/* WHATS GREATER EXERCISE */

// int main()
// {
//     int number1, number2;

//     printf("Enter first number: ");
//     scanf("%d", &number1);

//     printf("Enter second number: ");
//     scanf("%d", &number2);

//     if (number1 > number2)
//         printf("%d", number1);
//     else (printf("%d", number2));
// }





/* FIND MIN AND MAX EXERCISE */

// int main()
// {
//     float number1, number2;

//     printf("Enter first number: ");
//     scanf("%f", &number1);

//     printf("Enter second number: ");
//     scanf("%f", &number2);

//     if (number1 > number2)
//         printf("%.2f is the minimum and %.2f is the maximum.", number2, number1);
//     else printf("%.2f is the minimum and %.2f is the maximum.", number1, number2);
// }





/* FIND MIN AND MAX BETWEEN 3 NUMBERS EXERCISE */

// int main()
// {
//     int number1, number2, number3;
//     int min, max;

//     printf("Enter first number: ");
//     scanf("%d", &number1);

//     printf("Enter second number: ");
//     scanf("%d", &number2);

//     printf("Enter third number: ");
//     scanf("%d", &number3);

//     max = number1;
//     min = number2;

//     if (number1 < number2)
//     {
//         max = number2;
//         min = number1;
//     }

//     if (number3 > max)
//         max = number3;

//     if (number3 < min)
//         min = number3;

//     printf("MINIMUM between your numbers is %d\n", min);
//     printf("MAXIMUM between your numbers is %d", max);
// }





/* STUDENT GRADE EXERCISE */

// int main()
// {
//     int grade;

//     printf("Enter student grade: ");
//     scanf("%d", &grade);

//     if (grade >= 80)
//         printf("Excellent job!");

//     else if (grade < 80 && grade >= 60)
//         printf("Not bad...");
    
//     else
//         printf("Oh... you didn't pass.");
// }





/* STUDENT GRADE EXERCISE */

// int main()
// {
//     char mathOper;
//     int num1, num2;
    
//     printf("Enter first number: ");
//     scanf("%d", &num1);

//     getchar();

//     printf("Enter mathematical character ('+', '-', '*', '/', '&'): ");
//     scanf("%c", &mathOper);
    
//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     switch (mathOper)
//     {    
//         case '+':
//             printf("%d %c %d = %d", num1, mathOper, num2, num1 + num2);
//             break;
        
//         case '-':
//             printf("%d %c %d = %d", num1, mathOper, num2, num1 - num2);
//             break;
        
//         case '*':
//             printf("%d %c %d = %d", num1, mathOper, num2, num1 * num2);
//             break;
        
//         case '/':
//             if (num2 == 0)
//                 printf("You cannot divide by 0!");
//             else
//                 printf("%d %c %d = %d", num1, mathOper, num2, num1 / num2);
//             break;
        
//         case '%':
//             if (num2 == 0)
//                 printf("You cannot divide by 0!");
//             else
//                 printf("%d %c %d = %d", num1, mathOper, num2, num1 % num2);
//             break;
        
//         default:
//             printf("Wrong mathematical operation... Try again.");
//             break;
//     }
// }





/* 2 NUMBERS IS EQUAL EXERCISE */

// int main()
// {
//     int num1, num2;

//     printf("Enter first number: ");
//     scanf("%d", &num1);

//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     if (num1 == num2)
//         printf("EQUAL");
//     else
//         printf("NOT EQUAL");
// }





/* 3 NUMBERS IS EQUAL EXERCISE */

// int main()
// {
//     int num1, num2, num3;

//     printf("Enter first number: ");
//     scanf("%d", &num1);

//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     printf("Enter third number: ");
//     scanf("%d", &num3);

//     if (num1 == num2 && num1 == num3)
//         printf("EQUAL");
//     else
//         printf("NOT EQUAL");
// }





/* THREE-DIGIT NUMBER ASCENDING EXERCISE */

// int main()
// {
//     int num1, num2, num3;

//     printf("Enter first number: ");
//     scanf("%d", &num1);

//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     printf("Enter third number: ");
//     scanf("%d", &num3);

//     if (num1 < num2 && num2 < num3)
//         printf("ASCENDING");
//     else
//         printf("NOT ASCENDING");
// }





/* NEGATIVE AND POSIVE NUMBERS EXERCISE */

// int main()
// {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (number > 0)
//         printf("1");
//     else if
//         (number < 0)
//         printf("-1");
//     else
//         printf("0");
// }





/* PRINT ABSOLUTE VALUE NUMBER EXERCISE */

// int main()
// {
//     int number;

//     printf("Enter a number (Positive / Negative): ");
//     scanf("%d", &number);

//     if (number < 0)
//         printf("The absolute value of '%d' is %d", number, number * -1);
//     else
//         printf("The absolute value of '%d' is %d", number, number);
// }





/* NUMBER OF MONTH TO IT'S NAME EXERCISE */

// int main()
// {
//     int month;

//     printf("Enter a number of a month: ");
//     scanf("%d", &month);

//    switch (month)
//    {
//         case 1:
//             printf("Your month is January.");
//             break;

//         case 2:
//             printf("Your month is February.");
//             break;

//         case 3:
//             printf("Your month is March.");
//             break;

//         case 4:
//             printf("Your month is April.");
//             break;

//         case 5:
//             printf("Your month is May.");
//             break;

//         case 6:
//             printf("Your month is June.");
//             break;

//         case 7:
//             printf("Your month is July.");
//             break;

//         case 8:
//             printf("Your month is August.");
//             break;

//         case 9:
//             printf("Your month is September.");
//             break;

//         case 10:
//             printf("Your month is October.");
//             break;

//         case 11:
//             printf("Your month is November.");
//             break;

//         case 12:
//             printf("Your month is December.");
//             break;
        
//         default:
//             printf("Wrong number of month. Try again!");
//             break;
//    }
// }





/* UNIQE CLOCK PRESENTATION EXERCISE */

// int main()
// {
//     int inSeconds;
//     int hours, minutes, seconds;

//     printf("Enter total seconds to convert: ");
//     scanf("%d", &inSeconds);

//     hours = inSeconds / 3600;
//     minutes = (inSeconds - hours * 3600) / 60;
//     seconds = (inSeconds - hours * 3600) % 60;

//     if (hours < 10)
//         printf("0");
//     printf("%d:", hours);

//     if (minutes < 10)
//         printf("0");
//     printf("%d:", minutes);

//     if (inSeconds < 10)
//         printf("0");
//     printf("%d", seconds);
// }





/* DIVISIBLE NUMBERS EXERCISE */

// int main()
// {
//     int a, b, c;

//     printf("Enter 3 numbers: ");
//     scanf("%d%d%d", &a, &b, &c);

//     if ((a % b == 0 || b % a == 0) && (b % c == 0 || c % b == 0) && (a % c == 0 || c % a == 0))
//         printf("Divisible numbers!");
//     else
//         printf("Not divisible numbers!");
// }





/* NEXT DAY CALENDER EXERCISE */

// int main()
// {
//     int day, month, year;

//     printf("Enter number of day: ");
//     scanf("%d", &day);

//     printf("Enter number of month: ");
//     scanf("%d", &month);

//     printf("Enter number of year: ");
//     scanf("%d", &year);

//     printf("Your date after a calculation is: %d/%d/%d", day + 1, month, year);
// }





/* DATE IN HEXADECIMAL EXERCISE */

// int main()
// {
//     int day, month, year;

//     printf("Enter number of day: ");
//     scanf("%d", &day);

//     printf("Enter number of month: ");
//     scanf("%d", &month);

//     printf("Enter number of year: ");
//     scanf("%d", &year);

//     printf("Your date in Hexadecimal digits is: 0x%X/0x%X/0x%X", day, month, year);
// }





/* LOWER OR UPPER SIGN EXERCISE */

// int main()
// {
//     char sign;

//     printf("Enter a sign: ");
//     scanf("%c", &sign);

//     if (sign >= 'A' && sign <= 'Z')
//         printf("It's an uppercase sign!");

//     else if (sign >= 'a' && sign <= 'z')
//         printf("It's a lowercase sign!");
    

//     else if (sign >= '0' && sign <= '9')
//         printf("It's a digit!");

//     else
//         printf("Other...");
// }





/* 1-DIGIT VALUE TO HEXADECIMAL VALUE EXERCISE */

// int main()
// {
//     int hex;
    
//     printf("Enter a character in hexadecimal format (0-9): ");
//     scanf("%d", &hex);
    
//     switch (hex) {
//         case 0:
//             printf("Binary: 0000\n");
//             break;

//         case 1:
//             printf("Binary: 0001\n");
//             break;

//         case 2:
//             printf("Binary: 0010\n");
//             break;

//         case 3:
//             printf("Binary: 0011\n");
//             break;

//         case 4:
//             printf("Binary: 0100\n");
//             break;

//         case 5:
//             printf("Binary: 0101\n");
//             break;

//         case 6:
//             printf("Binary: 0110\n");
//             break;

//         case 7:
//             printf("Binary: 0111\n");
//             break;

//         case 8:
//             printf("Binary: 1000\n");
//             break;

//         case 9:
//             printf("Binary: 1001\n");
//             break;

//         default:
//             printf("Invalid input!\n");
//             break;
//     }
    
//     return 0;
// }
