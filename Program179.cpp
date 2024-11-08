#include<iostream>
using namespace std;

bool ChkBit(unsigned int iNum)
{
    unsigned int iResult = 0;
    unsigned int iMask = 2147483649;

    iResult = iMask & iNum;

    if(iResult == iMask)
    {
        return true
    }
    return false;
}
int main()
{
    unsigned int iNo = 0;
    bool bRet = false;

    cout<<"Enter the Number : ";
    cin>>iNo;

    bRet = ChkBit(iNo);

    if(bRet == true)
    {
        cout<<"1 and 32 bit is on : "<<endl;
    }
    else
    {
        cout<<"1 and 32 bit is off : "<<endl;
    }
    return 0;
}