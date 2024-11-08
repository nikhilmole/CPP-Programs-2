#include<iostream>
using namespace std;

bool ChkBit(unsigned int iNum, int iPos1, int iPos2)
{
    unsigned int iMask1 = 1 << (iPos1 - 1);
    unsigned int iMask2 = 1 << (iPos2 - 1);
    unsigned int iResult1 = 0;
    unsigned int iResult2 = 0;

    iResult1 = iMask1 & iNum;
    iResult2 = iMask2 & iNum;

    if((iResult1 == iMask1)&&(iResult2 == iMask2))
    {
        return true;
    } 

    return false;
}


int main()
{
    unsigned int iNo = 0;
    int iNum1 = 0;
    int iNum2 = 0;
    bool bRet = false;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    cout<<"Enter the 1st position : "<<endl;
    cin>>iNum1;

    cout<<"Enter the 2nd Positon : "<<endl;
    cin>>iNum2;

    bRet = ChkBit(iNo, iNum1, iNum2);
    if(bRet == true)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}