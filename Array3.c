#include<stdio.h>

int main()
{
    int Arr[4] = {11,21,51,101};

    printf("Base address of array : %d\n",Arr);     //Ans = 100

    printf("Base address of first element of array : %d\n",&(Arr[0]));      //Ans = 100

    printf("Base address of first secound of array : %d\n",&(Arr[1]));

    printf("First element is : %d\n",Arr[0]);       // Ans = 11

    printf("Size of whole array : %d\n",sizeof(Arr));       //Ans = 16

    printf("Size of secound element of array : %d\n",sizeof(Arr[1]));      //Ans = 4

    return 0;
}
