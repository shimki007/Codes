#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iAdd = 0;
    iAdd = iNo1 + iNo2;
    return iAdd;
}

int Substraction(int iNo3, int iNo4)
{
    int isub = 0;
    isub = iNo3 - iNo4;
    return isub;
}

int Multiplication(int iNo5, int iNo6)
{
    int iMult = 0;
    iMult = iNo5 * iNo6;
    return iMult;
}

int Division(int iNo7, int iNo8)
{
    int iDiv = 0;
    iDiv = iNo7 / iNo8;
    return iDiv;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iAns = 0;

    printf("Enter the first elements : \n");
    scanf("%d",&iValue1);

    printf("Enter the second elements : \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1, iValue2);
    printf("The answer is : %d \n",iAns);

    iAns = Substraction(iValue1, iValue2);
    printf("The answer is : %d \n",iAns);

    iAns = Multiplication(iValue1, iValue2);
    printf("The answer is : %d \n",iAns);

    iAns = Division(iValue1, iValue2);
    printf("The answer is : %d \n",iAns);

    return 0;
}