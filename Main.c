#include<stdio.h>

int i;
int j = 11;

extern int no;          //used to access external file 'no'
int main()
{
    printf("Value of i : %d\n",i);      //0 (BSS)
    printf("Value of j : %d\n",j);      //11 (Non BSS)
    printf("Value of no : %d\n",no);    //21 (Non BSS)

    return 0;

}

// gcc Main.c Helper.c -o Myexe
// sequence is not important