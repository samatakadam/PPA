#include<stdio.h>

int main()
{
    float arr[]={10.3,43.4,45.34,234.45};
    float*p=NULL;
    float*q=NULL;


    p= arr;
    q=&(arr[3]);


    printf("%d",p); 
    printf("%d",q); 
    printf("%d",*p);
    printf("%d",*q);
    printf("%d",*(p+2));
    printf("%d",*(p+1);
    printf("%d",p[1]);
    printf("%d",*(2+arr));
    printf("%d",0[arr]);
    printf("%d",q-p);
    printf("%d",*(q-2));


    return 0;

}