#include<iostream>
using namespace std;

const int A=10; //constant global variable
int B=20;
class Demo
{
    public:
    int X,Y;
    Demo()
    {
        X=10;
        Y=20;
    }
    void fun(int i,const int j) //constant input argument

    {
        int No1=11;
        const int No2=21; //constant local variable
        i++; //a
        j++; //na 
        No1++; //a
        No2++; //na
    }

};

int main ()
{
    Demo obj1

    const Demo obj2 ;  //constant object 

    
    
    

    


    return 0;
}