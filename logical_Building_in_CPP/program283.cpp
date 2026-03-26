///////////////////////////////////////////////////
//
//  File name : program283.cpp
//  Desprtion: change bit ^
//  Author: Kartik Ganesh Jare
//  Date : 15/06/25
//
///////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo , UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);
    
    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0,iLocation = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Enter the postion : \n";
    cin>>iLocation;

    iRet = ToggleBit(iValue,iLocation);

    cout<<"Update nmuber is : "<<iRet<<"\n";

    return 0;
}