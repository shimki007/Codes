#include<stdio.h>

void Fun()
{
    static int i = 10;
    i++;
    printf("Value of i : %d\n",i);
}

int main()
{
    Fun();          //11
    Fun();          //11
    Fun();          //11

    return 0;
}