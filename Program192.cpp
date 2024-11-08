#include<iostream>
using namespace std;

unsigned int OnBit(unsigned int iNum, int iPos)
{
    unsigned int iMask = 0;
    unsigned int iResult = 0;

    iMask = 1 << (iPos - 1);

    iResult = iMask | iNum;

    return iResult;
}
int main()
{
    unsigned int iNo = 0;
    unsigned int iRet = 0;
    int iValue = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    cout<<"Enter the Poition : "<<endl;
    cin>>iValue;

    iRet = OnBit(iNo, iValue);
    cout<<"The updated number is : "<<iRet;

    return 0;
}