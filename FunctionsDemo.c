#include<stdio.h>

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int Substraction(int No3, int No4)
{
    int Ans = 0;
    Ans = No3 - No4;
    return Ans;
}

int main()
{
    int Value1 = 0, Value2 = 0;
    int Ret = 0;

    printf("Enter First Elements : \n ");
    scanf("%d",&Value1);

    printf("Enter Second Elements : \n ");
    scanf("%d",&Value2);

    Ret = Addition(Value1,Value2);
    printf("Additon is : %d\n",Ret);

    Ret = Substraction(Value1,Value2);
    printf("Substraction  is : %d\n",Ret);

    return 0;
}