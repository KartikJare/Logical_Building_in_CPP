#include<iostream>
using namespace std;

int main()
{
    int Size,Cnt;

    cout<<"Enter number of element : \n";
    cin>>Size;

    int * ptr = new int[Size];

    // Use

    delete []ptr;

    
    return 0;
}