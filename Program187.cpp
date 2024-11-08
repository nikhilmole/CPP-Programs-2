#include<iostream>
using namespace std;

bool OnorOff(unsigned int iNum)
{
    unsigned int iMask = 2304;
    unsigned int iResult = 0;

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
    bool bRet = false;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    bRet = OnorOff(iNo);
    if(bRet == true)
    {
        cout<<"9th and 12th bit in on"<<endl;
    }
    else
    {
        cout<<"9th and 12th bit in off"<<endl;
    }

    return 0;
}