#include<iostream>
using namespace std;

unsigned int ToggleBit(unsigned int iNum)
{
    unsigned int iResult = 0;
    unsigned int iMask = 0x00000040;

    iResult = iMask ^ iNum;

    return iResult;
}
int main()
{
    unsigned int iNo = 0;
    unsigned int iRet = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    iRet = ToggleBit(iNo);

    cout<<"Updated number is : "<<iRet;

    return 0;
}