#include <stdio.h> // INPUT AND OUTPUT OPERATIONS
#include <math.h> // MATHEMATICAL OPERATIONS
#include <string.h> // STRING MANIPULATIONS
#include <stdlib.h> // DYNAMIC MEMORY



/* INITIAL STRUCTS PRINT DATE EXERCISE */

// typedef struct date
// {
//     int day;
//     int month;
//     int year;
// }
// Date;


// Date inputDate()
// {
//     Date dt;

//     printf("Enter a day to the date: ");
//     scanf("%d", &dt.day);

//     printf("Enter a month to the date: ");
//     scanf("%d", &dt.month);

//     printf("Enter a year to the date: ");
//     scanf("%d", &dt.year);

//     return dt;
// }


// int main()
// {
//     Date graduationDate = inputDate();

//     printDate(graduationDate);
// }


// void printDate(Date dt)
// {
//     printf("The graduation is (%d, %d, %d)", dt.day, dt.month, dt.year);
// }





/* PRINT NEXT DAY DATE EXERCISE */

// typedef struct date
// {
//     int day;
//     int month;
//     int year;
// }
// Date;


// void printDate(Date dt)
// {
//     printf("(%d, %d, %d)\n", dt.day, dt.month, dt.year);
// }


// Date printNextDay(Date dt)
// {
//     dt.day = dt.day + 1;
    
//     if (dt.day > 31)
//     {
//         dt.day = 1;
//         dt.month++;

//         if (dt.month > 12)
//         {
//             dt.month = 1;
//             dt.year++;
//         }
//     }

//     printf("The next day is: \n");
//     printDate(dt);

//     return dt;
// }


// int main()
// {
//     Date todayDate = {31, 12, 2002};

//     printf("Current date: \n");
//     printDate(todayDate);

//     printNextDay(todayDate);
// }





/* INPUT & PRINT POINT EXERCISE */

// typedef struct point
// {
//     int x;
//     int y;
// }
// Point;


// void printPoint(Point p1)
// {
//     printf("Point x = %d\n", p1.x);
//     printf("Point y = %d\n", p1.y);
// }


// Point inputPoint()
// {
//     Point myPoint;

//     printf("Enter x coordinate: \n");
//     scanf("%d", &myPoint.x);

//     printf("Enter y coordinate: \n");
//     scanf("%d", &myPoint.y);

//     return myPoint;
// }


// int main()
// {
//     Point p1 = inputPoint();

//     printf("P1 before changes:\n");
//     printPoint(p1);

//     p1.x += 1;
//     p1.y += 3;

//     printf("P1 after changes:\n");
//     printPoint(p1);

//     return 0;
// }





/* ARRAY BASIC USAGE EXERCISE */

// typedef struct point
// {
//     int x;
//     int y;
// }
// Point;


// int main()
// {
//     Point pointArray[5];
//     int i;

//     for (i = 0; i < 5; i++)
//     {
//         printf("Enter point %d for 'x' coordinate: ", i + 1);
//         scanf("%d", &pointArray[i].x);

//         printf("Enter point %d for 'y' coordinate: ", i + 1);
//         scanf("%d", &pointArray[i].y);
//     }

//     for (i = 0; i < 5; i++)
//     {
//         printf("point #%d: (%d, %d)\n", i + 1, pointArray[i].x, pointArray[i].y);
//     }
// }





/* DATA MEMBERS AND COPYING STRUCT VARIABLES EXERCISE */

// typedef struct employee
// {
//     char name[10];
//     float age;
//     int id;
// }
// Employee;


// int main()
// {
//     Employee emp1;
//     Employee emp2 = {"Jake", 24.5, 123};

//     strcpy(emp1.name, "John");
//     emp1.id = 456;

//     printf("Employee #1 name is %s\n", emp1.name);
//     printf("Employee #2 name is %s\n", emp2.name);

//     printf("Employee #1 id is %d\n", emp1.id);
//     printf("Employee #2 id is %d", emp2.id);
// }





/* COMPARE 2 DIFFERENT EMPLOYEES EXERCISE */

// typedef struct employee
// {
//     char name[10];
//     float age;
//     int id;
// }
// Employee;


// int equalByAge(Employee e1, Employee e2)
// {
//     if (e1.age == e2.age)
//         return 0;
//     else if (e1.age < e2.age)
//         return -1;
//     else
//         return 1;
// }
