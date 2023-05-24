#include <stdio.h>
#include <stdlib.h>
#include "addproduct.c"
#include "view2.c"
#include "deleteproduct.c"
#include "editproduct.c"
#include<windows.h>


// #define ANSI_COLOR_RESET   "\x1b[0m"
// #define ANSI_COLOR_RED     "\x1b[31m"
// #define ANSI_COLOR_GREEN   "\x1b[32m"
// #define ANSI_COLOR_YELLOW  "\x1b[33m"
// #define ANSI_COLOR_BLUE    "\x1b[34m"
// #define ANSI_COLOR_MAGENTA "\x1b[35m"
// #define ANSI_COLOR_CYAN    "\x1b[36m"
// #define ANSI_BGCOLOR_RED   "\x1b[41m"

int main()
{
    system("cls");
    //system ("color 10");
    int choice;
    char ch;
    do
    {
        system("cls");

        printf("\n\t*********Welcome to product management system**********\n");
        printf("\t 1. Add product \n");
        printf("\t 2. Delete product \n");
        printf("\t 3. View product \n");
        printf("\t 4. Edit product \n");
        printf(" \t 5. Exit \n");
        printf(" \t Enter your choice \n");
        scanf("%d%*c", &choice);
        switch (choice)
        {
        case 1:
            addproduct();
            break;
        case 2:
            deleteproduct();
            break;
        case 3:
            view2();
            break;
        case 4:
            editproduct();
            break;
        case 5:
            printf("Exiting system..........\n");
            exit(0);
            break;
        default:
            printf("Invalid choice!");
            exit(0);
            break;
        }
        printf("Press enter to continue else press any key...");
        scanf("%c", &ch);
    } while (ch == '\n');
    return 0;
}