#include<iostream>
using namespace std;

int Pro(int iNo)
{
    int iDigit = 0;
    static int iPro = 1;

    if(iNo > 0)
    {   
        iDigit = iNo % 10;
        iPro = iPro * iDigit;
        iNo = iNo / 10;
        Pro(iNo);
    }

    return iPro;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    iRet = Pro(iNo);
    cout<<"The product is : "<<iRet;

    return 0;
}