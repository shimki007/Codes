#include<stdio.h>

int main()
{
    int i = 10;
    signed int j = 20;
    signed int k = -30;

    unsigned int a = 40;
    //unsigned int b = -40;        //NOT ALLOWED (Negative value is a bad programming method)

    int x = 10;                 //10/-      4 bytes         ]
    short int y = 10;           //8/-       2 bytes          } As per the value
    long int z = 20;            //15/-      8 bytes         ]

   printf("%d\n",i);
   printf("%d\n",j);
   printf("%d\n",k);
   printf("%d\n",a);

   printf("Size of x is : %d\n",sizeof(x));
   printf("Size of y is : %d\n",sizeof(y));
   printf("Size of z is : %d\n",sizeof(z));

    return 0;
}