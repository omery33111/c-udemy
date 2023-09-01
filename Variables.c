#include <stdio.h> // INPUT AND OUTPUT OPERATIONS
#include <math.h> // MATHEMATICAL OPERATIONS
#include <string.h> // STRING MANIPULATIONS
#include <stdlib.h> // DYNAMIC MEMORY



/* NUMBER PYRAMID EXERCISE */

// int main ()
// {
//     printf("1*********\n\
//             12********\n\
//             123*******\n\
//             1234******\n\
//             12345*****\n");

//     return 0;
// }


// int main()
// {
//     printf("1*********\n");
//     printf("12********\n");
//     printf("123*******\n");
//     printf("1234******\n");
//     printf("12345*****\n");
// }
//     return 0;





/* X SHAPE EXERCISE */

// int main()
// {
//     printf("*   *\n * *\n  *\n * *\n*   *\n");
//     return 0;
// }





/* MY AGE EXERCISE */

// int main()
// {
//         printf("My age is '%d'", 2023 - 2002);
//         return 0;
// }





/* AVERAGE GRADE EXERCISE */

// int main ()
// {
//     int grade1;
//     int grade2;

//     scanf("%d", &grade1);
//     scanf("%d", &grade2);

//     printf("Average = %d", (grade1 + grade2) / 2);

//     return 0;
// }





/* SIMPLE VARIABLE EXERCISE */

// int main()
// {
//     int number;
 
//     scanf("%d", &number);
//     printf("User number is %d", number);

//     return 0;
// }





/* YEAR I WAS BORN EXERCISE */

// int main()
// {
//     int current_year;
//     int user_age;

//     scanf("%d", &current_year);
//     scanf("%d", &user_age);

//     printf("The year you were born is %d", current_year - user_age);
// }


// int main()
// {
//     int currentYear = 2023;
//     int userAge;

//     scanf("%d", &userAge);

//     int birthYear;
//     birthYear = currentYear - userAge;

//     printf("The year you were born is %d", birthYear);
// }





/* RECTANGLE AREA EXERCISE */

// int main()
// {
//     int rectHeight;
//     int rectWidth;

//     scanf("%d", &rectHeight);
//     scanf("%d", &rectWidth);

//     int rectangle;
//     rectangle = rectHeight * rectWidth;

//     printf("The area of your rectangle is %d", rectangle);
// }


// int main()
// {
//     double rectHeight, rectWidth;

//     printf("Enter rectangle height: ");
//     scanf("%lf", &rectHeight);

//     printf("Enter rectangle width: ");
//     scanf("%lf", &rectWidth);

//     double rectangle;
//     rectangle = rectHeight * rectWidth;

//     printf("The area of your rectangle is %lf", rectangle);
// }





/* 5 / 2 EXERCISE */

// int main()
// {
//     double num1 = 5;
//     double num2 = 2;

//     double result;
//     result = num1 / num2;
//     printf("5 / 2 = %lf", result);
// }





/* AVERAGE GRADE EXERCISE */

// int main()
// {
//     int grade1, grade2, grade3;

//     printf("Enter your first grade: ");
//     scanf("%d", &grade1);

//     printf("Enter your second grade: ");
//     scanf("%d", &grade2);

//     printf("Enter your third grade: ");
//     scanf("%d", &grade3);

//     double average;
//     average = (grade1 + grade2 + grade3) / 3;

//     printf("Your average is: %lf", average);
// }





/* WEATHER STATION EXERCISE */

// int main()
// {
//     double fahrenheit, celsius;
//     printf("Enter degrees in Fahrenheit: ");
//     scanf("%lf", &fahrenheit);

//     celsius = (fahrenheit - 32) / 1.8;
//     printf("Conversion of %.2lf Fahrenheit degrees is %.2lf Celcius Degrees.", fahrenheit, celsius);
// }


// int main()
// {
//     double fahrenheit, celsius;
//     printf("Enter degrees in Celsius: ");
//     scanf("%lf", &celsius);

//     fahrenheit = celsius * 1.8 + 32;
//     printf("Conversion of %.2lf Celcius degrees is %.2lf Fahrenheit Degrees.", celsius, fahrenheit);
// }





/* SWAP VARIABLES FUNCTIONALITY EXERCISE */

// int main()
// {
// 	float a = 11.1;
// 	float b = 22.2;
// 	float temp;

// 	printf("a = %f\n", a);
// 	printf("b = %f\n", b);

// 	temp = a;
// 	a = b;
// 	b = temp;

// 	printf("a = %f\n", a);
// 	printf("b = %f\n", b);
// }





/* ARITHMETIC SEQUENCE FIND LAST NUMBER IN SEQUENCE EXERCISE */

// int main()
// {
//     // 1, 3, 5, ..., an

//     int a1 = 1;
//     int d = 2;
//     int n = 9;
//     int an;

//     printf("an = %d", a1 + (n - 1) * d);
// }


// int main()
// {
//     double a1, d, n, an;

//     printf("Enter the initial term (a1): ");
//     scanf("%lf", &a1);

//     printf("Enter the distance (d): ");
//     scanf("%lf", &d);

//     printf("Enter total sequence numbers (n): ");
//     scanf("%lf", &n);

//     printf("an = %lf", a1 + (n - 1) * d, an);
// }





/* FIND SUM OF ARITHMETIC SEQUENCE EXERCISE */

// int main()
// {
//     float a1, an, sn;
//     int n;

//     printf("Enter the initial term (a1): ");
//     scanf("%f", &a1);
    
//     printf("Enter total sequence numbers (n): ");
//     scanf("%d", &n);

//     printf("Enter the last term (an): ");
//     scanf("%f", &an);

//     printf("The sum of the arithmetic sequence is: %.2f", (a1 + an) * n / 2, sn);
// }





/* TOTAL SALARY EXERCISE */

// int main()
// {
//     float salary;
//     float hours;

//     double total;

//     printf("Enter your salary per hour: ");
//     scanf("%f", &salary);
    
//     printf("Enter your last month hours: ");
//     scanf("%f", &hours);

//     printf("Your salary for this month is: %lf", salary * hours, total);
    
// }





/* CAR SPEED CALCULATION EXERCISE */

// int main()
// {
//     int speed;
//     float distance;

//     printf("Enter car speed: ");
//     scanf("%d", &speed);

//     printf("Enter distance to drive: ");
//     scanf("%f", &distance);

//     float time;
    
//     time = distance / speed;

//     printf("It will take you %.2f hours to arrive", time);
// }





/* TIME CONVERTER EXERCISE */

// int main()
// {
//     int inSeconds;
//     int hours, minutes, seconds;

//     printf("Enter total seconds to convert: ");
//     scanf("%d", &inSeconds);

//     hours = inSeconds / 3600;
//     minutes = (inSeconds - hours * 3600) / 60;
//     seconds = (inSeconds - hours * 3600) % 60;

//     printf("Total time of: %d:", hours);
//     printf("%d:", minutes);
//     printf("%d", seconds);
// }





/* REMOVE DECIMAL PART EXERCISE */

// int main()
// {
//     float data;

//     printf("Enter a number of floating point type: ");
//     scanf("%f", &data);

//     printf("The integer part: %d \n", (int)data);
//     printf("The decimal part: %.2f", data - (int)data);
// }





/* SUM OF TRIPLE DIGITS NUMBER EXERCISE */

// int main()
// {
//     int number;
//     int hundreds, tens, units;

//     printf("Enter a 3 digits number: ");
//     scanf("%d", &number);

//     units = number % 10;
//     tens = (number / 10) % 10;
//     hundreds = number / 100;

//     printf("The total sum of digits in %d is %d: ", number, units + tens + hundreds);
// }





/* REVERSED NUMBER EXERCISE */

// int main()
// {
//     int number;
//     int hundreds, tens, units;

//     printf("Enter a 3 digits number: ");
//     scanf("%d", &number);

//     units = number % 10;
//     tens = (number / 10) % 10;
//     hundreds = number / 100;

//     printf("Reversed number of %d is: %d%d%d ", number, units, tens, hundreds);
// }


// int main()
// {
//     int number;
//     int hundreds, tens, units;
//     int reversedNumber;

//     printf("Enter a 3 digits number: ");
//     scanf("%d", &number);

//     units = number % 10; // 1
//     tens = (number / 10) % 10; // 3
//     hundreds = number / 100; // 5

//     reversedNumber = units; // 1
//     reversedNumber = reversedNumber * 10 + tens; // 13
//     reversedNumber = reversedNumber * 10 + hundreds; // 130 + 5 = 135

//     printf("Reversed number of %d is: %d ", number, reversedNumber);
// }





/* DISTANCE BETWEEN 2 POINTS EXERCISE */

// int main()
// {
//     float x1, x2, y1, y2;
//     float distance;

//     printf("Enter x1: ");
//     scanf("%f", &x1);

//     printf("Enter y1: ");
//     scanf("%f", &y1);

//     printf("Enter x2: ");
//     scanf("%f", &x2);

//     printf("Enter y2: ");
//     scanf("%f", &y2);

//     distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

//     printf("The distance between the points (%.2f, %.2f) and (%.2f, %.2f) is: %.2f", x1, y1, x2, y2, distance);
// }





/* EFFICIENT CALCULATION EXERCISE */

// int main()
// {
//     int x;
//     int x2, x4, x6, x8;

//     printf("Enter x: ");
//     scanf("%d", &x);

//     x2 = x * x;
//     x4 = x * x * x * x;
//     x6 = x * x * x * x * x * x;
//     x8 = x * x * x * x * x * x * x * x;

//     printf("x ^ 2 = %d, \n x ^ 4 = %d, \n x ^ 6 = %d, \n x ^ 8 = %d \n", x2, x4, x6, x8);
// }
