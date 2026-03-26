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
    float *ptr = NULL;
    int iLength = 0,iCnt = 0;
    float fRet = 0.0f;

    cout<<"Enter number of element : \n";
    cin>>iLength;

    ptr = new float[iLength];
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

    fRet = Maximum(ptr,iLength);

    cout<<"Maximum element is : "<<fRet<<"\n";

    delete []ptr;

    return 0;
}