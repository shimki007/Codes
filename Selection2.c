#include<stdio.h>

int main()
{
    int standard = 0;

    printf("Primary school portal\n");

    printf("Enter your division : \n ");
    scanf("%d",&standard);
    //If else if ladder
    if(standard == 1)
    {
        printf("Your exam is at 1 PM\n");
    }
    else if(standard == 2)
    {
        printf("Your exam is at 2 PM\n");
    }
    else if(standard == 3)
    {
        printf("Your exam is at 3 PM\n");
    }
    else if(standard == 4)
    {
        printf("Your exam is at 4 PM\n");
    }
    else
    {
       printf("Invalid standard\n"); 
    }
    

    return 0;
}