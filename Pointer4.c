#include<stdio.h>

int main()
{
    int Arr[5] = {11,21,51,101,111};

    int *p = Arr;               //int *p = &(Arr[0]); is simillar

    int *q = &(Arr[4]);

    return 0;
}