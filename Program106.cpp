#include<iostream>
using namespace std;

void SumOfDigits(int Arr[], int iSize)
{
    int i = 0; 
    int iSum = 0;
    int iDigit = 0;
    int iNo = 0;

    cout<<"The digits addithion is : "<<endl;

    for(i = 0; i < iSize; i++)
    {
        iNo = Arr[i];
        iSum = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        cout<<iSum<<endl;
    }
}
int main()
{
    int iSize = 0; 
    int *P = NULL;
    int i = 0;

    cout<<"How many numbers you want to add in array : "<<endl;
    cin>>iSize;

    P = new int[iSize];
    cout<<"Entyer the numbers : "<<endl;

    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }

    SumOfDigits(P, iSize);

    return 0;
}