#include<stdio.h>

struct Hello
{
    int no ;
    float d ;
};

struct Demo
{
    int i ;
    float f ;
    struct Hello obj1;
    struct Hello obj2;
}dobj;

int main()
{
    printf("Size of the object is : %d\n",Sizeof(dobj));

    return 0;
}