#include<iostream>
using namespace std;

int Min(int iNum)
{
    static int iMin = 9;
    int iDigit = 0;

    if(iNum > 0)
    {
        iDigit = iNum % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNum = iNum / 10;
        Min(iNum);
    }
    return iMin;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    iRet = Min(iNo);
    cout<<iRet;

    return 0;
}