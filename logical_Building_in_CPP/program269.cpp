///////////////////////////////////////////////////
//
//  File name : program269.cpp
//  Desprtion:
//  Author: Kartik Ganesh Jare
//  Date : 15/06/25
//
///////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Number in Demcimal format : "<<std::dec<<iValue<<"\n";
    cout<<"Number in Octal format : "<<std::oct<<iValue<<"\n";
    cout<<"Number in Hexademcimal format : "<<std::hex<<iValue<<"\n";
    
    return 0;
}