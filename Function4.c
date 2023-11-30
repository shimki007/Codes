#include<stdio.h>

int Addition(int No1, int No2)
{
    int Sum = 0;
    Sum = No1 + No2;
    return Sum;
}

int Substraction(int No3, int No4)
{
    int Sub = 0;
    Sub = No3 - No4;
    return Sub;
}

int Multiplication(int No5, int No6)
{
    int mul = 0;
    mul = No5 * No6;
    return mul;
}

int Division(int No7, int No8)
{
    int Div = 0;
    Div = No7 / No8;
    return Div;
}

int main()
{
    int Value1 = 10;
    int Value2 = 5;
    int Ans = 0;

    Ans = Addition(Value1,Value2);
    printf("Addition is : %d\n",Ans);

    Ans = Substraction(Value1,Value2);
    printf("Substraction is : %d\n",Ans);

    Ans = Multiplication(Value1,Value2);
    printf("Multiplication is : %d\n",Ans);

    Ans = Division(Value1,Value2);  
    printf("Division is : %d\n",Ans);

    return 0;
}