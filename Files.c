#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // INPUT AND OUTPUT OPERATIONS
#include <math.h> // MATHEMATICAL OPERATIONS
#include <string.h> // STRING MANIPULATIONS
#include <stdlib.h> // DYNAMIC MEMORY



/* BASICS OF FILES */

// int main()
// {
//     FILE* fp;

//     fp = fopen();

//     fclose(fp);
// }





/* INITIAL FILES */

// int main()
// {
//     FILE* fp;

//     fp = fopen("InitialFiles.txt", "w");

//     if (fp == NULL)
//         printf("The opening of the file has failed.\n");
//     else
//     {
//         printf("The file is open for writing\n");
//     }

//     fclose(fp);
// }





/* ACTIONS ON FILES */

// int main()
// {
//     FILE* fp;
//     char myChar1;

//     fp = fopen("InitialFiles.txt", "r");

//     if (fp != NULL)
//     {
//         printf("The file is open for READING\n");

//         myChar1 = fgetc(fp);

//         printf("The character that was read is %c\n", myChar1);

//         fclose(fp);
//     }
// }


/* ITERATE ALL OVER THE TEXT */

// int main()
// {
//     FILE* fp;
//     char myChar1;

//     fp = fopen("InitialFiles.txt", "r");

//     if (fp != NULL)
//     {
//         printf("The file is open for READING\n");
        
//         while ((myChar1 = fgetc(fp)) != EOF) {
//             printf("%c", myChar1);
//         }

//         printf("%c", myChar1);
//         fclose(fp);
//     }
// }
