#include<iostream>
using namespace std;

int Rev(int iNo)
{
    int iDigit = 0;
    static int iRev = 0;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;

        Rev(iNo);
    }
    return iRev;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    iRet = Rev(iNo);
    cout<<iRet;

    return 0;
}