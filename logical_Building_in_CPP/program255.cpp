#include<iostream>
using namespace std;

template <class T>
T Maximum(T No1,T No2,T No3)
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
    cout<<Maximum(21,18,27)<<"\n";
    cout<<Maximum(21.25f,18.95f,27.85f)<<"\n";
    
    return 0;
}