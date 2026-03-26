#include<iostream>
using namespace std;

class ArrayX    // Increasing
{
    public:
        int *Arr;
        int iSize;
        bool Sorted;

        ArrayX(int no)
        {
            iSize = no;
            Arr = new int[iSize];
            Sorted = true;
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter "<<iSize<< " elements : \n";

            int i = 0;                 // 11 
            
            for(i = 0;i < iSize;i++) 
            {
                cout<<"Enter the element no : "<<i+1<<"\n";
                cin>>Arr[i];

                if(i > 0 && Sorted == true)   // IMP
                {
                    if(Arr[i] < Arr[i-1])
                    {
                        Sorted = false;
                    }
                }
            }
        }

        void Display()
        {
            cout<<"Elements of the array are : \n";

            int i = 0;
            
            for(i = 0;i < iSize;i++)
            {
                cout<<Arr[i]<<"\t";
            }
            cout<<"\n";
        }

        bool LinearSearch(int no)    //N
        {
            int i = 0;
            bool bFlag = false;

            if(Sorted == true)
            {
                cout<<"Data is sorted";

                return BinaryserachEfficientInc(no);
            }

            for(i = 1;i < iSize;i++)
            {
                if(Arr[i] == no)
                {
                    bFlag = true;
                    break;
                }    
            }

            return bFlag;
        }

        bool BiDirectionalSearch(int no)     // N/2
        {
            int iStrat = 0;
            int iEnd = 0;

            bool bFlag = false;

            for(iStrat = 1,iEnd = iSize - 1;iStrat <= iEnd;iStrat++,iEnd--)
            {
                if(Arr[iStrat] == no || Arr[iEnd] == no)
                {
                    bFlag = true;
                    break;
                } 
            }

            return bFlag;
        }

        bool BinaryserachInc(int no)
        {
            int iStart = 0,iEnd = 0,iMid = 0;
            bool bFlag = false;

            iStart = 0;
            iEnd = iSize - 1;

            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if(Arr[iMid] == no)
                {
                    bFlag = true;
                    break;
                }
                else if(no < Arr[iMid]) // First half (left window)
                {
                    iEnd = iMid -1;                
                }
                else if(no > Arr[iMid]) // second half (right window)
                {
                    iStart = iMid + 1;
                }
            } // End of while 
            
            return bFlag;
        }

        bool BinaryserachDec(int no)
        {
            int iStart = 0,iEnd = 0,iMid = 0;
            bool bFlag = false;

            iStart = 0;
            iEnd = iSize - 1;

            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if(Arr[iMid] == no)
                {
                    bFlag = true;
                    break;
                }
                else if(no > Arr[iMid]) // First half (left window)
                {
                    iEnd = iMid -1;                
                }
                else if(no < Arr[iMid]) // second half (right window)
                {
                    iStart = iMid + 1;
                }
            } // End of while 
            
            return bFlag;
        }

        bool BinaryserachEfficientInc(int no)
        {
            int iStart = 0,iEnd = 0,iMid = 0;
            bool bFlag = false;

            if(Sorted == false) // New
            {
                cout<<"Data is not sorted\n";

                return LinearSearch(no); // Important
            }

            iStart = 0;
            iEnd = iSize - 1;

            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if((Arr[iMid] == no) || (Arr[iStart] == 0) || (Arr[iEnd] == 0)) //Change
                {
                    bFlag = true;
                    break;
                }
                else if(no < Arr[iMid]) // First half (left window)
                {
                    iEnd = iMid -1;                
                }
                else if(no > Arr[iMid]) // second half (right window)
                {
                    iStart = iMid + 1;
                }
            } // End of while 
            
            return bFlag;
        }

        bool BinaryserachEfficientDec(int no)
        {
            int iStart = 0,iEnd = 0,iMid = 0;
            bool bFlag = false;

            iStart = 0;
            iEnd = iSize - 1;

            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if((Arr[iMid] == no) || (Arr[iStart] == 0) || (Arr[iEnd] == 0)) //Change
                {
                    bFlag = true;
                    break;
                }
                else if(no > Arr[iMid]) // First half (left window)
                {
                    iEnd = iMid -1;                
                }
                else if(no < Arr[iMid]) // second half (right window)
                {
                    iStart = iMid + 1;
                }
            } // End of while 
            
            return bFlag;
        }

        bool CheckSortedInc()
        {
            bool bFalg = true;
            int i = 0;

            for(i = 0; i < iSize - 1;i++)
            {
                if(Arr[i] > Arr[i+1]) // change 
                {
                    bFalg = false;
                    break;
                }
            }

            return bFalg;
        }

        bool CheckSortedDec()
        {
            bool bFalg = true;
            int i = 0;

            for(i = 0; i < iSize - 1;i++)
            {
                if(Arr[i] < Arr[i+1]) // change 
                {
                    bFalg = false;
                    break;
                }
            }

            return bFalg;
        }
};

int main()
{
    int iLenght = 0;
    int iValue = 0;
 
    bool bRet = false;

    cout<<"Enter the size of array : \n";
    cin>>iLenght;

    ArrayX *aobj = new ArrayX(iLenght);

    aobj-> Accept();

    aobj-> Display();

    cout<<"Enter the value that you want to sreach : \n";
    cin>>iValue;

    bRet = aobj->LinearSearch(iValue);

    if(bRet == true)
    {
        cout<<"Element is present\n";
    }
    else
    {   
        cout<<"Element is not present\n";
    }

    delete aobj;

    return 0;
}