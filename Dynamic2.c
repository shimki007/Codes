#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of arra : \n");
    scanf("%d",&iSize);

    ptr = (int *)calloc(iSize , sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    free(ptr);

    return 0;
}
