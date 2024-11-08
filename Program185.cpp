#include<iostream>
using namespace std;

int CountOnBits(unsigned int iNum)
{
    int iCount = 0;

    while(iNum > 0)
    {
        iCount = iCount + (iNum & 1);
        iNum >>= 1;
    }

    return iCount;
}
int main()
{
    unsigned int iNo = 0;
    unsigned int iRet = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    iRet = CountOnBits(iNo);
    cout<<"The on bits number are : "<<iRet;

    return 0;
}