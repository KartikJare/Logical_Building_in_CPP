///////////////////////////////////////////////////
//
//  File name : program284.cpp
//  Desprtion: off multiple
//  Author: Kartik Ganesh Jare
//  Date : 15/06/25
//
///////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT offBitMultiple(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 << 3;
    iMask2 = iMask2 << 6;

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    iResult = iNo & iMask1;     //4
    iResult = iResult & iMask2; // 7

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = offBitMultiple(iValue);

    cout<<"Update nmuber is : "<<iRet<<"\n";

    return 0;
}