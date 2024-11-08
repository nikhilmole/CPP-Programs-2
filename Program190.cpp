#include<iostream>
using namespace std;

bool ChkBit(unsigned int iNum, int iPose)
{
    unsigned int iMask = 0;
    unsigned int iResult = 0;

    iMask = 1 << (iPose - 1);

    iResult = iMask & iNum;

    if(iMask == iResult)
    {
        return true;
    }

    return false;
}
int main()
{
    unsigned int iNo = 0;
    bool bRet = false;
    int iValue = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    cout<<"Enter the Position : "<<endl;
    cin>>iValue;

    bRet = ChkBit(iNo,iValue);

    if(bRet == true)
    {
        cout<<"The bit is on"<<endl;
    }
    else
    {
        cout<<"The bit is off"<<endl;
    }   

    return 0;
}