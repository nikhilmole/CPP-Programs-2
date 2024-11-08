#include<iostream>
using namespace std;

unsigned int OffBit(unsigned int iNum)
{
    unsigned int iMask = 0xFFFFFFBF;
    unsigned int iResult = 0;

    iResult = iNum & iMask;

    return iResult;
}
int main()
{   
    unsigned int iNo = 0;
    unsigned int iRet = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    iRet = OffBit(iNo);

    cout<<"Updated number is : "<<iRet;

    return 0;
}