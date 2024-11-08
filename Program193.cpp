#include<iostream>
using namespace std;

unsigned int Toggle(unsigned int iNum, int iPos)
{
    unsigned int iMask = 0;
    unsigned int iResult = 0;

    iMask = 1 << (iPos -1);

    iResult = iMask ^ iNum;

    return iResult;
}
int main()
{
    unsigned int iNo = 0;
    unsigned int iRet = 0;
    int iValue = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    cout<<"Enter the position : "<<endl;
    cin>>iValue;

    iRet = Toggle(iNo, iValue);
    cout<<"Updated number is : "<<iRet;

    return 0;
}