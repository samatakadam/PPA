#include<stdio.h>

int main()


{

int Value1=0  , Value2=0, Ret=0;
int (*fptr) (int ,int);

fptr= Multiplication;



printf("Enter First number : \n");
scanf("%d",&Value1);

printf("Enter Second  number :  \n");
scanf("%d",&Value2);


Ret=fptr( Value1 , Value2);


printf("Multiplication is :  %d  \n",Ret);








    return 0;
}