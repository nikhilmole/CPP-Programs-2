#include<iostream>
using namespace std;

bool ChkBit(unsigned int iNum)
{   
    unsigned int iResult = 0;
    unsigned int iMask = 135282752;

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

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    bRet = ChkBit(iNo);

    if(bRet == true)
    {
        printf("7 15 21 28 bit is on");
    }
    else
    {
        printf("7 15 21 28 bit is off");
    }

    return 0;
}