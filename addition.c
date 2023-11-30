#include<stdio.h>
#define MAX 10
int ADD(int No1, int No2)
{
    int Ans;
    Ans = No1+No2+MAX;
    printf("Addition of two Number is %d",Ans);
    return Ans;
}
int main(){
    ADD(5,5);
}