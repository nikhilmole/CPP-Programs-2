#include<iostream>
using namespace std;

int Dif(int Arr[], int iLength)
{
    int i = 0; 
    int iMax = Arr[0];
    int iMin = Arr[0];
    int Ans = 0;

    for(i = 0; i < iLength; i++)
    {
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
        else if(iMin > Arr[i])
        {
            iMin = Arr[i];
        }
    }
    Ans = iMax - iMin;
    return Ans;
}
int main()
{   
    int i = 0; 
    int *P = NULL;
    int iSize = 0;
    int iRet = 0;

    cout<<"How many numbers you watn to add in array : "<<endl;
    cin>>iSize;

    P = new int[iSize];

    cout<<"Enter the numbers : "<<endl;

    for( i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }

    iRet = Dif(P, iSize);
    cout<<"Difference between maximum and minimum number is : "<<iRet;
    return 0;
}