#include "product.h"
void addproduct()
{
    printf("\n *******************Add new product******************\n");
    product p1;
    FILE *ptr;
    ptr = fopen("storage.bin", "ab");
    printf("\n*************Add new product*********\n");
    printf("enter product id :");
    scanf("%d%*c", &p1.id);
    printf("enter product name:");
    scanf("%[^\n]%*c", &p1.name);
    printf("enter product price :");
    scanf("%f", &p1.price);
    printf("enter product quantity :");
    scanf("%d", &p1.quantity);

    fwrite(&p1, sizeof(product), 1, ptr);
    fclose(ptr);
    printf("Product added successfully :\n");
}