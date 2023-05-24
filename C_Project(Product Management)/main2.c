#include "addproduct.c"
#include "deleteproduct.c"
#include "view2.c"
#include "edit2.c"
// #include "search.c"
#include<windows.h>

int main()
{
    int choice;
    char ch;
    do
    {
        // system("cls");
        system("color 3");
        // system("clear");//for linux
        printf("\n\t=========Welcome to Product mangement System==================\n");
        printf("\t 1.Add Product \n");
        printf("\t 2.Delete Product \n");
        printf("\t 3.view Product \n");
        printf("\t 4.Edit Product \n");
        printf("\t 5.Exit\n");

        printf("enter ur choice :");
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
            edit2();
            break;
        case 5:
            printf("Exiting System....\n");
            exit(0);
            break;

        default:
            printf(" Invalid Choice !!");
            exit(0);
            break;
        }
        printf("Press enter to continue  else press any key...  ");
        scanf("%c", &ch);
    } while (ch == '\n');
    return 0;
}
