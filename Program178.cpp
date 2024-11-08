#include<iostream>
using namespace std;

bool ChkBit(unsigned int iNum)
{
    unsigned int iResult = 0;
    unsigned int iMask = 448;

    iResult = iMask & iNum;

    if(iResult == iMask)
    {
        return true;    
    }

    return false;
    
}

int main()
{
    unsigned int iNo = 0;
    bool bRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    bRet = ChkBit(iNo);

    if(bRet == true)
    {
        cout<<"7 8 & 9 bit is on"<<endl;
    }
    else
    {
        cout<<"7 8 & 9 bit is off"<<endl;
    }

    return 0;
}