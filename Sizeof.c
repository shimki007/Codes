#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 21;
    float f = 12.31f;
    double d = 89.90;

    printf("size of character is : %d bytes\n",sizeof(ch));
    printf("size of integer is : %d bytes\n",sizeof(i));
    printf("size of float is : %d bytes\n",sizeof(f));
    printf("size of Double is : %d bytes\n",sizeof(d));

    printf("Base address of character is : %d\n",&ch);      
    printf("Base address of integer is : %d\n",&i);
    printf("Base address of flaot is : %d\n",&f);
    printf("Base address of Double is : %d\n",&d);

    return 0;
}