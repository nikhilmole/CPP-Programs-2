#include<iostream>
using namespace std;

bool ChkBit(unsigned int iNum)
{
    unsigned int iResult = 0;
    unsigned int iMask = 16400;

    iResult = iNum & iMask;

    if(iResult == iMask)
    {
        return true;
    }

    return false;
}
int main()
{
    unsigned int iNo = 0;
    bool bRet = false;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    bRet = ChkBit(iNo);
    if(bRet == true)
    {
        cout<<"The 15 and 5 bit is on"<<endl;
    }
    else
    {
        cout<<"The 15 and 5 bit is off"<<endl;
    }

    return 0;
}