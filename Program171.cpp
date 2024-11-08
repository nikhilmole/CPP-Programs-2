#include<iostream>
using namespace std;

int Max(int iNum)
{
    static int iMax = 0;
    int iDigit = 0;

    if(iNum > 0)
    {
        iDigit = iNum % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        iNum = iNum / 10;
        Max(iNum);    
    }
    return iMax;
}

int main()
{   
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    iRet = Max(iNo);
    cout<<iRet;
    return 0;
}