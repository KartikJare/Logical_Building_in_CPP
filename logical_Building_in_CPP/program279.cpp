///////////////////////////////////////////////////
//
//  File name : program277.cpp
//  Desprtion: used 27 bit
//  Author: Kartik Ganesh Jare
//  Date : 15/06/25
//
///////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo , UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    if(iPos <= 0 || iPos > 32)
    {
        cout<<"Invalid bit position";
        return false;
    }

    iResult = iMask << (iPos -1);
    iResult = iNo & iMask;

    return(iResult == iMask);
}

int main()
{
    UINT iValue = 0,iLocation = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Enter the postion : \n";
    cin>>iLocation;

    bRet = CheckBit(iValue,iLocation);

    if(bRet == true)
    {
        cout<<"bit is ON at location "<<iLocation<<"\n";
    }
    else
    {
        cout<<"bit is OFF at location "<<iLocation<<"\n";
    }
    
    return 0;
}