///////////////////////////////////////////////////
//
//  File name : program292.cpp
//  Desprtion: used 
//  Author: Kartik Ganesh Jare
//  Date : 15/06/25
//
///////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo) //12
{
    UINT iMask = 0xfffff7ff;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0,iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = ChangeBit(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";
    
    return 0;
}