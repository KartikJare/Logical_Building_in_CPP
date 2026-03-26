#include<iostream>
using namespace std;

int main()
{
    int Size;
    int iCnt = 0;

    cout<<"Enter number of element : \n";
    cin>>Size;

    int * ptr = new int[Size];

    // Use
    cout<<"Enter the element : \n";
    for(iCnt = 0;iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Element of the array are: \n";
    for(iCnt = 0;iCnt < Size;iCnt++)
    {   
        cout<<ptr[iCnt]<<"\n";
    }

    delete []ptr;

    
    return 0;
}