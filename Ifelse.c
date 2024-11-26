#include<stdio.h>

int main ()
{
    int i=11;
    char ch=90.89;
    float f=90.76;
    double d=90.768654;

    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(d));

    return 0;
    

}