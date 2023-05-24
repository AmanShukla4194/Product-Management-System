#include "product.h"
#include "gotoxy.h"
void view2()
{
    FILE *ptr = fopen("storage.bin", "rb");

    product vp;

    system("cls");
    int x = 1, y = 1;
    printf("%-20s|%-20s|%-20s|%-20s\n", "Id", "PRODUCT NAME", "PRICE", "QUANTITY");
    while (fread(&vp, sizeof(product), 1, ptr))
    {
        // gotoxy(x+=5,y++);
        printf("%-20d|%-20s|%-20.2f|%-20d\n", vp.id, vp.name, vp.price, vp.quantity);
        // printf("%d%s%0.2f%d",vp.id,vp.name,vp.price,vp.quantity);
    }
    fclose(ptr);
    char ch;
    printf("\nPress enter to continue  else press any key...  ");
    scanf("%c", &ch);
}