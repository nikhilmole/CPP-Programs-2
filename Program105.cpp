#include<iostream>
using namespace std;

void DigitDis(int Arr[], int iLength)
{
    int i = 0;

    cout<<"The three number digits are : "<<endl;
    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] > 99)&&(Arr[i] < 1000))
        {
            cout<<Arr[i]<<endl;
        }
    }
}
int main()
{
    int i = 0;
    int iSize = 0;
    int *P = NULL;
    
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

    DigitDis(P, iSize);

    return 0;
}