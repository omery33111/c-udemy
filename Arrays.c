#include <stdio.h> // INPUT AND OUTPUT OPERATIONS
#include <math.h> // MATHEMATICAL OPERATIONS
#include <string.h> // STRING MANIPULATIONS
#include <stdlib.h> // DYNAMIC MEMORY



/* MAXIMUM VALUE IN ARRAY EXERCISE */

// int main()
// {
//     int phone_number[] = {0, 5, 2, 8, 4, 4, 7, 1, 7, 2};
//     int max, i;

//     max = phone_number[0];

//     for (i = 1; i < 10; i++)
//     {
//         if (phone_number[i] > max)
//             max = phone_number[i];
//     }

//     printf("Max digit in your phone number is %d", max);
// }





/* MAXIMUM VALUE IN ARRAY #2 EXERCISE */

// #define SIZE 10

// int main()
// {
//     int phone_number[SIZE];
//     int max = 0, i;

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("Enter number %d: ", i + 1);
//         scanf("%d", &phone_number[i]);
//     }

//     for (i = 1; i < SIZE; i++)
//     {
//         if (phone_number[i] > phone_number[max])
//             max = i;
//     }

//     printf("Max digit in your phone number is %d", phone_number[max]);
// }





/* COOLEST WEATHER STATION EXERCISE */

// #define SIZE 7

// int main()
// {
//     float weather[SIZE];
//     int hottest = 0, coldest = 0;
//     float average, sum = 0.0;
//     int i;

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("Enter weather for day %d: ", i + 1);
//         scanf("%f", &weather[i]);
//     }

//     for (i = 1; i < SIZE; i++)
//     {
//         sum = sum + weather[i];
//         if (weather[hottest] < weather[i])
//         {
//             hottest = i;
//             continue;
//         }

//         if (weather[coldest] > weather[i])
//         {
//             coldest = i;
//         }
//     }

//     average = sum / SIZE;

//     printf("The average temperature = %f\n", average);
//     printf("The hottest day of the weak was at day = %d\n", hottest + 1);
//     printf("The coldest day of the weak was at day = %d", coldest + 1);
// }





/* COOLEST WEATHER STATION EXERCISE */

// int main()
// {
//     int pushups[10] = {3, 4, 3, 5, 7, 8, 6, 9, 9, 10};
//     int i;

//     for (i = 9; i >= 0; i--)
//     {
//         printf("Number of pushups = %d\n", pushups[i]);
//     }
// }



// int main()
// {
//     int pushups[10];
//     int i;

//     for (i = 0; i < 10; i++)
//     {
//         printf("Enter number of pushups on day %d: ", i + 1);
//         scanf("%d", &pushups[i]);
//     }

//     for (i = 9; i >= 0; i--)
//     {
//         printf("%d days ago, you did %d pushups.\n", 10 - i - 1, pushups[i]);
//     }
// }





/* COPYING AN ARRAY EXERCISE */

// #define SIZE 3

// int main()
// {
//     int date1[SIZE] = {27, 3, 2002};
//     int date2[SIZE];

//     int i;

//     for (i = 0; i < SIZE; i++)
//     {
//         date2[i] = date1[i];
//     }

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("Original date in the %d time - %d\n", i + 1, date1[i]);
//         printf("Copyied date in the %d time - %d\n", i + 1, date2[i]);
//         printf("\n");
//     }
// }





/* IS A PALINDROME OR NOT EXERCISE */

// #define SIZE 5

// int main()
// {
//     int array[SIZE] = {1, 2, 3, 2, 1};
//     int flag = 1;
//     int i;

//     for (i = 0; i < SIZE / 2; i++)
//     {
//         if (array[i] != array[SIZE - 1 - i])
//         {
//             flag = 0;
//             break;
//         }
//     }

//     if (flag == 1)
//         printf("The array is a palindrome!");
//     else
//         printf("The array is NOT a palindrome!");
// }





/* MAXIMUM SUM OF 2 NEIGHBORS IN ARRAY EXERCISE */

// #define SIZE 5

// int main()
// {
//     int array[SIZE];
//     int max;
//     int i;

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("Enter %d number to the list: ", i + 1);
//         scanf("%d", &array[i]);
//     }

//     max = array[0] + array[1];

//     for (i = 1; i < SIZE; i++)
//     {
//         if (array[i] + array[i + 1] > max)
//         max = array[i] + array[i + 1];
//     }

//     printf("Maximum sum of two neighbors is %d", max);
// }





/* CHECK IF ARRAY IS SORTED EXERCISE */

// #define SIZE 5

// int main()
// {
//     int i;
//     int sortedlvl = 2;

//     int array[SIZE];

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("Enter %d/5 number to the array: ", i + 1);
//         scanf("%d", &array[i]);
//     }

//     for (i = 1; i < SIZE; i++)
//     {
//         if (array[i - 1] > array[i])
//         {
//             sortedlvl = 0;
//             break;
//         }

//         if (array[i - 1] == array[i])
//         {
//             sortedlvl = 1;
//         }
//     }

//         if (sortedlvl == 2)
//             printf("Really Sorted.");
//         else if (sortedlvl == 1)
//             printf("Sorted.");
//         else
//             printf("NOT Sorted.");
// }





/* UNIQE ELEMENTS IN ARRAY EXERCISE */

// #define SIZE 10

// int main()
// {
//     int uniqe_count = 0, uniqe_found = 0;
//     int i, j;

//     int array[SIZE];

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("Enter value %d/%d to the array: ", i + 1, SIZE);
//         scanf("%d", &array[i]);
//     }

//     for (i = 0; i < SIZE; i++)
//     {
//         for (j = 0; j < SIZE; j++)
//         {
//             if (i == j)
//                 continue;
//             if (array[i] == array[j])
//             {
//                 uniqe_found = 1;
//                 break;
//             }
//         }

//         if (uniqe_found != 1)
//         {
//             printf("Uniqe value: %d\n", array[i]);

//             uniqe_count++;
//             uniqe_found = 0;
//         }
//     }

//     printf("Total of %d unique numbers.", uniqe_count);
// }






/* NON-UNIQE ELEMENTS IN ARRAY EXERCISE */

// #define SIZE 10

// int main()
// {
//     int non_uniqe = 0, uniqe_found = 0;
//     int i, j;

//     int array[SIZE];

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("Enter value %d/%d to the array: ", i + 1, SIZE);
//         scanf("%d", &array[i]);
//     }

//     for (i = 0; i < SIZE; i++)
//     {
//         uniqe_found = 0;
        
//         for (j = 0; j < i; j++)
//         {
//             if (array[i] == array[j])
//             {
//                 uniqe_found = 1;
//                 break;
//             }
//         }

//         if (uniqe_found == 1)
//             break;
        
//         else
//             for (j = i + 1; j < SIZE; j++)
//             {
//                 if (array[i] == array[j])
//                 {
//                     printf("Non-uniqe value: %d\n", array[i]);
//                     non_uniqe++;
//                     break;
//                 }
//             }
//     }

//     printf("Total of %d non-unique values.", non_uniqe);
// }





/* ROTATE ELEMENTS LEFT IN ARRAY EXERCISE */

// #define SIZE 5

// int main()
// {
//     int non_unique = 0, unique_found = 0;
//     int i, temp;

//     int array[SIZE] = {1, 2, 3, 4, 5};

//     temp = array[0];

//     for (i = 1; i < SIZE; i++)
//     {
//         array[i - 1] = array[i];
//     }

//     array[SIZE - 1] = temp;

//     printf("Array elements: ");
//     for (i = 0; i < SIZE; i++)
//     {
//         printf("%d ", array[i]);
//     }
// }





/* ROTATE ELEMENTS LEFT 'N' TIMES IN ARRAY EXERCISE */

// #define SIZE 5

// int main()
// {
//     int rotate;
//     int i, k, temp;

//     int array[SIZE] = {1, 2, 3, 4, 5};

//     printf("Enter number of times to rotate left: ");
//     scanf("%d", &rotate);

//     for (k = 0; k < rotate; k++)
//     {
//         temp = array[0];

//         for (i = 1; i < SIZE; i++)
//         {
//             array[i - 1] = array[i];
//         }

//         array[SIZE - 1] = temp;
//     }
    
//     printf("Array elements: ");
//     for (i = 0; i < SIZE; i++)
//     {
//         printf("%d ", array[i]);
//     }
// }





/* ROTATE ELEMENTS RIGHT 'N' TIMES IN ARRAY EXERCISE */

// #define SIZE 5

// int main()
// {
//     int rotate;
//     int i, k, temp;

//     int array[SIZE] = {1, 2, 3, 4, 5};

//     printf("Enter number of times to rotate right: ");
//     scanf("%d", &rotate);

//     for (k = 0; k < rotate; k++)
//     {
//         temp = array[SIZE - 1];

//         for (i = SIZE - 1; i > 0; i--)
//         {
//             array[i] = array[i - 1];
//         }

//         array[0] = temp;
//     }
    
//     printf("Array elements: ");
//     for (i = 0; i < SIZE; i++)
//     {
//         printf("%d ", array[i]);
//     }
// }





/* CLOSEST SUM OF 0 OUT OF ARRAY NUMBERS EXERCISE */

// #define SIZE 5

// int main()
// {
//     int i, j;
//     int curr_sum;

//     int array[SIZE] = {-2, 2, 1, 3, 4};
//     int min_sum = array[0] + array[1];

//     for (i = 0; i < SIZE; i++)
//     {
//         for (j = i + 1; j < SIZE; j++)
//         {
//             curr_sum = array[i] + array[j];
//             if(abs(curr_sum) < abs(min_sum))
//                 min_sum = curr_sum;
//         }
//     }

//     printf("Closest sum to 0 is: %d", min_sum);
// }





/* CALCULATION OF ARRAY NUMBERS EXERCISE */

// #define SIZE 3

// int main()
// {
//     int i;
//     int sum = 0;

//     int array[SIZE];

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("Enter %d/%d value to array: ", i + 1, SIZE);
//         scanf("%d", &array[i]);
//     }

//     for (i = 0; i < SIZE; i++)
//     {
//         sum = sum + array[i];
//     }

//     printf("Total sum of your array: %d", sum);
// }



// int sum_array(int *pArr, int size)
// {
//     int i;
//     int sum = 0;

//     for (i = 0; i < size; i++)
//     {
//         sum = sum + pArr[i];
//     }

//     return sum;
// }


// int main()
// {
//     int size;
//     int result = 0;
//     int i;

//     printf("Enter array size: ");
//     scanf("%d", &size);
    
//     int array[size];

//     for (i = 0; i < size; i++)
//     {
//         printf("Enter %d/%d value to array: ", i + 1, size);
//         scanf("%d", &array[i]);
//     }

//     result = sum_array(array, size);

//     printf("The result sum is: %d", result);
// }





/* RESET ALL ARRAY NUMBERS EXERCISE */

// int reset_array(int *pArr, int size)
// {
//     int i;

//     for (i = 0; i < size; i++)
//     {
//         pArr[i] = 0;
//     }

//     printf("Array after reset: ");
//     for (i = 0; i < 3; i++)
//     {
//         printf("%d ", pArr[i]);
//     }
// }


// int main()
// {
//     int i;
//     int upd_array;

//     int array[3] = {1, 2, 3};

//     printf("Array before reset: ");
//     for (i = 0; i < 3; i++)
//     {
//         printf("%d ", array[i]);
//     }
    
//     printf("\n");

//     upd_array = reset_array(array, 3);
// }










// /* 2 DIMENSIONAL ARRAYS */ //





/* INITIALIZING 2 DIMENSIONAL ARRAYS */

// int main()
// {
//     int i, j;

//     int my_2darray[2][3] = {{1, 3, 5}, {2, 4, 6}};

//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 3; j++)
//             printf("%d ", my_2darray[i][j]);
//         printf("\n");
//     }
// }





/* MULTIPLICATION TABLE ARRAYS */

// #define SIZE 11

// int main()
// {
//     int x, y;

//     int table[SIZE][SIZE];

//     for (x = 1; x < SIZE; x++)
//     {
//         for (y = 1; y < SIZE; y++)
//             table[x][y] = x * y;
//     }

//     for (x = 1; x < SIZE; x++)
//     {
//         for (y = 1; y < SIZE; y++)
//             printf("%5d ", table[x][y]);
//         printf("\n");
//     }
// }


// #define SIZE 10

// int main()
// {
//     int x, y;

//     int table[SIZE][SIZE];

//     for (x = 1; x < SIZE; x++)
//     {
//         for (y = 1; y < SIZE; y++)
//             table[x][y] = x * y;
//     }

//     for (x = 1; x < SIZE; x++)
//     {
//         for (y = 1; y < SIZE; y++)
//             printf("%5d ", table[x][y]);
//         printf("\n");
//     }
// }





/* INSERT VALUES INTO 2D ARRAY */

// int main()
// {
//     int x, y;

//     int array[3][3];

//     for (x = 0; x < 3; x++)
//     {
//         for (y = 0; y < 3; y++)
//         {
//             printf("Enter another number: ");
//             scanf("%d", &array[x][y]);
//         }  
//     }
    
//     for (x = 0; x < 3; x++)
//     {
//         for (y = 0; y < 3; y++)
//             printf("%d ", array[x][y]);
//         printf("\n");
//     }
// }



// int main()
// {
//     int i, j;
    
//     int x, y;

//     printf("Enter number of rows: ");
//     scanf("%d", &x);

//     printf("Enter number of columns: ");
//     scanf("%d", &y);

//     int array[x][y];

//     for (i = 0; i < x; i++)
//     {
//         for (j = 0; j < y; j++)
//         {
//             printf("Enter a number number: ");
//             scanf("%d", &array[i][j]);
//         }  
//     }
    
//     for (i = 0; i < x; i++)
//     {
//         for (j = 0; j < y; j++)
//             printf("%d ", array[i][j]);
//         printf("\n");
//     }
// }










// /* COUNTING ARRAYS */ //





/* COUNT NUMBER 0-5 ARRAY */

// #define SIZE 8

// int main()
// {
//     int arr[SIZE] = {0, 5, 4, 2, 1, 3, 2, 0};
//     int countArr[6] = {0};

//     for (int i = 0; i < SIZE; i++)
//     {
//         countArr[arr[i]]++;
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Element %d occurs %d times\n", i, countArr[i]);
//     }

//     return 0;
// }





/* FIND MAX NUMBER SET 0-9 IN ARRAY */

// #define SIZE 20

// int main()
// {
//     int arr[SIZE] = {0, 5, 4, 9, 5, 8, 2, 3, 1, 5, 4, 9, 5, 5, 2, 7, 6, 5, 4, 1};
//     int countArr[10] = {0};
//     int i, maxIndex;

//     for (i = 0; i < SIZE; i++)
//     {
//         countArr[arr[i]]++;
//     }

//     maxIndex = 0;

//     for (i = 1; i < 10; i++)
//     {
//         if (countArr[i] > countArr[maxIndex])
//             maxIndex = i;
//     }
//     printf("Max Index in the array is %d", maxIndex);
// }
