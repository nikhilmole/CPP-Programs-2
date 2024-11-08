#include<iostream>
using namespace std;

unsigned int OffBit(unsigned int iNum, int iPos)
{
    unsigned int iMask = 0;
    unsigned int iResult = 0;

    iMask = ~(1 << (iPos - 1));

    iResult = iMask & iNum;
    
    return iResult;
}
int main()
{
    unsigned int iNo = 0;
    unsigned int iRet = 0;
    int iValue = 0;

    cout<<"Entyer the Number : "<<endl;
    cin>>iNo;

    cout<<"Enter the Position : "<<endl;
    cin>>iValue;

    iRet = OffBit(iNo, iValue);
    cout<<"Updated number is : "<<iRet;

    return 0;
}