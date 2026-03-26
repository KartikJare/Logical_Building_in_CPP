#include<iostream>
using namespace std;

void Display(int Arr[],int iLenght)
{
    int iCnt = 0;

    cout<<"Element of the array are: \n";
    for(iCnt = 0;iCnt < iLenght;iCnt++)
    {   
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Size;
    int iCnt = 0;

    cout<<"Enter number of element : \n";
    cin>>Size;

    int *ptr = new int[Size];
    
    
    // Use
    cout<<"Enter the element : \n";
    for(iCnt = 0;iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Display(ptr,Size);

    delete []ptr;

    
    return 0;
}