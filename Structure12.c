#include<stdio.h>
# pragma pack(1)

union Demo
{
    int i;          //4
    char ch;        //1
    float f;        //4
    double d;       //8
};

int main()
{
    union Demo obj;

    printf("Size of object is : %d\n",sizeof(obj));

    obj.f = 90.99;
    printf("%f\n",obj.f);

    obj.i = 11;
    printf("%d\n",obj.i);

    return 0;
}