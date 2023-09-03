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





/* fputs() FUNCTION */

// int main()
// {
//     FILE* fp;
    
//     fputs("Hey man", stdout);
//     fputs("This is me! Omer!", stdout);

//     fp = fopen("InitialFiles.txt", "w");

//     if (fp != NULL)
//     {   
//         fputs("Hey man", fp);
//         fputs("This is me! Omer!", fp);
//         fclose(fp);
//     }

//     return 0;
// }





/* fgets() FUNCTION */

// int main()
// {
//     FILE* fp;

//     char myString[10];
//     int count = 0;
    
//     fp = fopen("InitialFiles.txt", "r");

//     if (fp != NULL)
//     {   
//         while (fgets(myString, 10, fp))
//             printf("String #%d read: %s", count++, myString);
        
//         fclose(fp);
//     }
// }





/* CHARACTER LENGTH IN A FILE */

// int main()
// {
//     FILE* fp;

//     int counter = 0;

//     char myChar;
//     fp = fopen("InitialFiles.txt", "r");

//     if (fp != NULL)
//     {   
//         while ((myChar = fgetc(fp)) != EOF)
//         {
//             printf("%c", myChar);

//             counter++;
//         }

//         fclose(fp);
//     }

//     printf("\nTotal of %d characters in the file!", counter);
// }





/* NUMBER OF SENTENCES IN A FILE */

// int main()
// {
//     FILE* fp;

//     int counterLines = 1;

//     char myChar;
//     fp = fopen("InitialFiles.txt", "r");

//     if (fp != NULL)
//     {   
//         while ((myChar = fgetc(fp)) != EOF)
//         {
//             if (myChar == '\n')
//                 counterLines++;
//         }

//         fclose(fp);
//     }

//     printf("\nTotal of %d sentences in the file!", counterLines);
// }





/* POWER OF A NUMBER IN A FILE */

// int main()
// {
//     FILE* fp;

//     fp = fopen("InitialFiles.txt", "w");

//     if (fp != NULL)
//     {   
//         for (int i = 1; i <= 10; i++)
//         {
//             fprintf(fp, "%d %d\n", i, i * i);
//         }
//         fclose(fp);
//     }
// }





/* fscanf() FUNCTION */

// int main()
// {
//     FILE* fp;

//     int num1, num2;

//     fp = fopen("InitialFiles.txt", "r");

//     if (fp != NULL)
//     {   
//         for (int i = 1; i <= 10; i++)
//         {
//             fscanf(fp, "%d%d", &num1, &num2);
//             printf("Read: %d %d\n", num1, num2);
//         }

//         fclose(fp);
//     }
// }





/* CALCULATE CHARACTER APPEARANCES IN A FILE */

// int main()
// {
//     FILE* fp;

//     char desiredCharacter;
//     int counter = 0;
//     char fileName[20] = {0};

//     printf("Enter desired character: ");
//     scanf("%c", &desiredCharacter);

//     printf("Enter file name to test: ");
//     scanf("%s", fileName);

//     fp = fopen(fileName, "r");

//     if (fp != NULL)
//     {   
//         while (!feof(fp))
//             if (fgetc(fp) == desiredCharacter)
//                 counter++;

//         fclose(fp);
//     }

//     printf("Total appearances of character %c is %d", desiredCharacter, counter);
// }
