#include<iostream>
using namespace std;

template <class T>// this message for compiler this will covernt into generi
void Swap(T *No1,T *No2)
{
    T temp = 0;

    temp = *No1;
    *No1 = *No2;
    *No2 = temp;
}

int main()
{
    int a = 10, b = 11;

    cout<<"Value of a before swap : "<<a<<"\n";
    cout<<"Value of b before swap : "<<b<<"\n";

    Swap(&a,&b);

    cout<<"Value of a : "<<a<<"\n"; //11
    cout<<"Value of b: "<<b<<"\n";  //10

    char x = 'A', y ='B';

    cout<<"Value of x before swap : "<<x<<"\n";
    cout<<"Value of y before swap : "<<y<<"\n";
    
    Swap(&x,&y);

    cout<<"Value of x : "<<x<<"\n"; //B
    cout<<"Value of y: "<<y<<"\n";  //A

    return 0;
}