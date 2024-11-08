#include<iostream>
using namespace std;

unsigned int OnLastFourBit(unsigned int iNum)
{
    unsigned int iResult = 0;
    unsigned int iMask = 0x0F;

    iResult = iMask | iNum;

    return iResult;
}
int main()
{
    unsigned int iNo = 0;
    unsigned int iRet = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    iRet = OnLastFourBit(iNo);
    cout<<iRet;
    
    return 0;
}