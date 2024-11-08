#include<iostream>
using namespace std;

int Product(int Arr[], int iLength)
{
    int i = 0;
    int iPro = 1;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iPro = iPro * Arr[i];
        }
    }
    return iPro;
}
int main()
{
    int i =0;
    int iSize = 0;
    int *P = NULL;
    int iRet = 0;

    cout<<"How many numbers you want to add in array : "<<endl;
    cin>>iSize;

    P = new int(iSize);

    cout<<"Enter the numbers : "<<endl;
    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }

    iRet = Product(P, iSize);
    cout<<"The product is : "<<iRet;
    
    return 0;
}