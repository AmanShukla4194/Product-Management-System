#include "product.h"
void deleteproduct()
{
    FILE *ptr, *tempptr;
    char ch;
    product tempprod;
    ptr = fopen("storage.bin", "rb");
    tempptr = fopen("tempstorage.bin", "wb");
    int id, flag = 0;
    printf("enter product id which you want to delete : ");
    scanf("%d", &id);
    while (fread(&tempprod, sizeof(product), 1, ptr))
    {
        if (tempprod.id != id)
        {
            fwrite(&tempprod, sizeof(product), 1, tempptr);
        }
        else
        {
            flag = 1;
        }
    }
    fclose(ptr);
    fclose(tempptr);
    remove("storage.bin");
    rename("tempstorage.bin", "storage.bin");
    if (!flag)
    {
        printf("product not found ! \n");
    }
    else
    {
        printf("product deleted successfully : \n");
    }
    scanf("%c", &ch);
}