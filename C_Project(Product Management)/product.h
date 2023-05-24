// in linux system do not define #include<windows.h>
//#iddef _linux
//#include<stdio.h>
#ifdef _WIN32
#include<windows.h>
#endif
#ifndef __PRODUCT_H  // this will prevent multiple redeclaration of header file
#define __PRODUCT_H

#include<stdio.h>
#include<stdlib.h>


typedef struct product
{
    int id;
    char name[50];
    float price;
    int quantity;
} product;

#endif


/*if you can include this header file again and again in other files then it will conflict in that
files that's why we used this #ifndef macro in which it will define the macro 
if it is not included previously

note : if you will not add 7th line then this error will appear : redefinition of 'struct product'
 will occur*/ 

