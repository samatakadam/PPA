#include<iostream>
using namespace std ;

class Demo 
{
    public :
    void fun (int *p)
    {
        cout<<"First Definition";
    }
    void fun (float *p)
    {
        cout<<"second  Definition";
    }
    void fun(int no)
    {
        cout<<"third  Definition";
    }
};
int main ()
{
    int no =11;
    float f=3.14;

    Demo obj();
    obj.fun(no);
    obj.fun(&no);
    obj.fun(&f);

    return 0;
}