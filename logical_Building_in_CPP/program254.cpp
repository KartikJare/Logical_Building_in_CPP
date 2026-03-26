// 12 16 11
//
#include<iostream>
using namespace std;

double Maximum(double No1,double No2,double No3)
{   
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    cout<<Maximum(14.86,18.69,11.70)<<"\n";
    cout<<Maximum(21.11,18.90,27.80)<<"\n";
    
    return 0;
}