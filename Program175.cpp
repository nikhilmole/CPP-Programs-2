#include<iostream>
using namespace std;

bool ChkBit(unsigned int iNum)
{
    unsigned int iMask = 16384;
    unsigned int iResult = 0;

    iResult  = iNum & iMask;

    if(iResult == iMask)
    {
        return true;
    }
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
        cout<<"The 15th bit is on"<<endl;
    }
    else
    {
        cout<<"The 15th bit is off"<<endl;
    }

    return 0;
}