#include <stdio.h> // INPUT AND OUTPUT OPERATIONS
#include <math.h> // MATHEMATICAL OPERATIONS
#include <string.h> // STRING MANIPULATIONS
#include <stdlib.h> // DYNAMIC MEMORY



/* LENGTH OF STRING EXERCISE */

// int string_length(char *pName)
// {
//     int length = 0;

//     while (pName[length] != '\0')
//     {
//         length++;
//     }

//     return length;
// }


// int main()
// {
//     char fullname[15];

//     printf("Enter full name: ");
//     gets(fullname);

//     int total_length = string_length(fullname);

//     printf("'%s' has length of %d.", fullname, total_length);
// }





/* NUMBER OF WORDS IN A SENTENCE EXERCISE */

// int words_count(char *pSent)
// {
//     int words_count = 1;
//     int i;

//     for (i = 0; i < strlen(pSent); i++)
//     {
//         if (pSent[i] == ' ')
//             words_count++;
//     }

//     return words_count;

// }


// int main()
// {
//     char sent[100];

//     printf("Enter a sentence: ");
//     gets(sent);

//     int count = words_count(sent);

//     printf("total of amount of words in '%s' is %d.", sent, count);
// }





/* IS A PALINDROME EXERCISE */

// int is_palindrome(char *str)
// {
//     int length = strlen(str);
//     int i, j;

//     for (i = 0, j = length - 1; i < j; i++, j--)
//     {
//         if (str[i] != str[j])
//             return 0;
//     }
    
//     return 1;
// }


// int main()
// {
//     char str[50];
    
//     printf("Enter a string: ");
//     gets(str);

//     if (is_palindrome(str))
//         printf("Palindrome\n");
//     else
//         printf("Not a palindrome\n");
// }





/* IMPLEMENTING 'strlen()' EXERCISE */

// int string_length(char *pName)
// {
//     int length = 0;

//     while (pName[length] != '\0')
//     {
//         length++;
//     }

//     return length;
// }


// int main()
// {
//     char fullname[15];

//     printf("Enter full name: ");
//     gets(fullname);

//     int total_length = string_length(fullname);

//     printf("'%s' has length of %d.", fullname, total_length);
// }





/* IMPLEMENTING 'strcpy()' EXERCISE */

// char *string_copy(char *destination, const char *source)
// {
//     int i = 0;

//     char *pDest;
//     pDest = destination;

//     while (source[i] != '\0')
//     {
//         destination[i] = source[i];
//         i++;
//     }

//     destination[i] = '\0';

//     return pDest;
// }


// int main()
// {
//     char fullname[] = "Omer Yanai";
//     char copy_name[30];
//     char *temp_copy;

//     temp_copy = string_copy(copy_name, fullname);

//     printf("Copy complete! %s", temp_copy);
// }





/* IMPLEMENTING 'strcmp()' EXERCISE */

// int string_compare(char *str1, char *str2)
// {   
//     int flag = 0;
//     int i = 0;

//     while (flag == 0)
//     {
//         if (str1[i] < str2[i])
//             flag = -1;
//         else if (str1[i] > str2[i])
//             flag = 1;

//         if (str1[i] == '\0')
//             break;

//         i++;
//     }

//     return flag;
// }


// int main()
// {
//     char str1[] = "Omer Yanai";
//     char str2[] = "Dor Yanai";

//     int compared_string = string_compare(str1, str2);

//     if (compared_string < 0)
//         printf("%s is less than %s\n", str1, str2);
//     else if (compared_string > 0)
//         printf("%s is greater than %s\n", str1, str2);
//     else
//         printf("%s is equal to %s\n", str1, str2);
// }
