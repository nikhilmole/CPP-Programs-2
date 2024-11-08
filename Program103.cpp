#include<iostream>
using namespace std;


int Min(int Arr[], int iLength)
{
    int i = 0; 
    int iMin = Arr[0];


    for(i = 0; i < iLength; i++)
    {
        if(iMin > Arr[i])
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}
int main()
{
    int i = 0;
    int *P = NULL;  
    int iSize = 0;
    int iRet = 0;

    cout<<"How many numbers you want to add in array : "<<endl;
    cin>>iSize;

    P = new int[iSize];
    if(P == NULL)
    {
        cout<<"Unable to allocate the memory"<<endl;
        return -1;
    }

    cout<<"Enter the numbers : "<<endl;

    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }

    iRet = Min(P, iSize);
    cout<<"the min num is : "<<iRet;

    return 0;
}