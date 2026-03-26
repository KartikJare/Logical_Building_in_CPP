// we can't covert main into generi
#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iLength = 0,iCnt = 0;

    cout<<"Enter number of element : \n";
    cin>>iLength;

    ptr = new int[iLength];
    if(ptr == NULL)
    {
        cout<<"unable to allocation the memory";
        return -1;
    }

    cout<<"Enter the elements : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of Array are : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }

    delete []ptr;

    return 0;
}