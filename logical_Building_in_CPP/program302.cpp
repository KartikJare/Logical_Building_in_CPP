#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)
{
    T iMax = 0;
    int iCnt = 0;

    iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0,iCnt = 0, iRet = 0;

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

    iRet = Maximum(ptr,iLength);

    cout<<"Maximum element is : "<<iRet<<"\n";

    delete []ptr;

    return 0;
}