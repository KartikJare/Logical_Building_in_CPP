#include<iostream>
using namespace std;

template <class T>
T Summation(T Arr[],int iLenght)
{
    int iCnt = 0;
    T Sum = 0;

    for(iCnt = 1;iCnt < iLenght;iCnt++)
    {   
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Size,Ret;
    int iCnt = 0;

    cout<<"Enter number of element : \n";
    cin>>Size;

    float * ptr = new float[Size];
    if(NULL == ptr)
    {
        cout<<"Memory Not Allocated\n";
        return -1;
    }

    // Use
    cout<<"Enter the element : \n";
    for(iCnt = 0;iCnt < Size; iCnt++)
    { 
        
        cin>>ptr[iCnt];
    }

    Ret = Summation(ptr,Size);

    cout<<"Addtion is : "<<Ret<<"\n";

    delete []ptr;

    
    return 0;
}