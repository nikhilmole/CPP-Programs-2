#include<iostream>
using namespace std;

unsigned int Toggle(unsigned int iNum)
{
    unsigned int iResult = 0;
    unsigned int iMask = 0x00000240;

    iResult = iMask ^ iNum;

    return iResult;
}
int main()
{
    unsigned int iNo = 0;
    unsigned int iRet = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    iRet = Toggle(iNo);

    cout<<"The updated number is : "<<iRet;
    return 0;
}