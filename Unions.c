#include <stdio.h> // INPUT AND OUTPUT OPERATIONS
#include <math.h> // MATHEMATICAL OPERATIONS
#include <string.h> // STRING MANIPULATIONS
#include <stdlib.h> // DYNAMIC MEMORY



/* HOW TO USE UNION EXERCISE */

// union info
// {
//     char firstName[20];
//     int age;
// };


// int main()
// {
//     union info var1;
    
//     strcpy(var1.firstName, "Alon\n");
//     printf("Variable #1 name: %s", var1.firstName);

//     var1.age = 30;
//     printf("Variable #1 age: %d", var1.age);
// }





/* UNIONS VS STRUCTS EXERCISE */

// struct point_struct
// {
//     int x;
//     int y;
// };

// union point_union
// {
//     int x;
//     int y;
// };


// int main()
// {
//     struct point_struct point1;
//     union point_union point2;

//     point1.x = 3;
//     point1.y = 3;

//     printf("STRUCT point = (%d, %d)\n", point1.x, point1.y);

//     point1.y = 10;

//     printf("After Change ---> STRUCT point = (%d, %d)\n", point1.x, point1.y);

//     point2.x = 5;

//     printf("UNION point = (%d, %d)\n", point2.x, point2.y);

//     point2.y = 4;

//     printf("After Change ---> UNION point = (%d, %d)", point2.x, point2.y);
// }





/* ADDITIONAL UNION EXAMPLES EXERCISE */

// typedef union student
// {
//     int ID;
//     double average;
// }
// Student;


// int main()
// {
//     Student student1;
//     Student *ptrStudent2;

//     student1.ID = 5;
//     printf("student1.ID: %d\n", student1.ID);

//     ptrStudent2 = &student1;

//     ptrStudent2->ID = 10;

//     printf("After Change ---> student1.ID: %d", student1.ID);
// }





/* ARRAY OF UNIONS EXERCISE */

// typedef union student
// {
//     int ID;
//     double average;
// }
// Student;


// int main()
// {
//     Student studentArray[3];

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter ID #%d: ", i + 1);
//         scanf("%d", &studentArray[i].ID);
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Student #%d ID is: %d\n", i + 1, studentArray[i].ID);
//     }
// }
