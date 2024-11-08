#include<iostream>
using namespace std;

unsigned int ToggleBit(unsigned int iNum, int iStart, int iEnd)
{
    unsigned int iMask = 0;
    unsigned int iResult = 0;
    int i = 0;

    for(i = iStart; i <= iEnd; i++)
    {
        iMask |= (1 << (i - 1));
    }

    iResult = iMask ^ iNum;

    return iResult;
}
int main()
{
    unsigned int iNo = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    unsigned int iRet = 0;

    cout<<"Enter the Number : ";
    cin>>iNo;

    cout<<"Enter the Starting range : ";
    cin>>iValue1;

    cout<<"Enter the Ending range : ";
    cin>>iValue2;

    iRet = ToggleBit(iNo, iValue1, iValue2);
    cout<<"Updated number is : "<<iRet;
    return 0;
}