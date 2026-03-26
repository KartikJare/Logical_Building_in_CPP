#include<iostream>
using namespace std;

float Summation(float Arr[],float iLenght)
{
    int iCnt = 0;
    float Sum = 0.0f;

    for(iCnt = 1;iCnt < iLenght;iCnt++)
    {   
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Size;
    int iCnt = 0;
    float Ret = 0.0f;

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