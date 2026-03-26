///////////////////////////////////////////////////
//
//  File name : program282.cpp
//  Desprtion: change bit ~
//  Author: Kartik Ganesh Jare
//  Date : 15/06/25
//
///////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo , UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);
    iMask = ~iMask;
    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0,iLocation = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Enter the postion : \n";
    cin>>iLocation;

    iRet = ChangeBit(iValue,iLocation);

    cout<<"Update nmuber is : "<<iRet<<"\n";

    return 0;
}