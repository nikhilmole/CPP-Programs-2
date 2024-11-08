#include<iostream>
using namespace std;

void CommonBit(unsigned int iNum1, unsigned int iNum2)
{
    unsigned int CommonBit = iNum1 & iNum2;
    unsigned int Position = 0;

    while(CommonBit)
    {
        if(CommonBit & 1)
        {
            cout<<"The Common bits are : "<<Position;
        }
        CommonBit >>=1;
        Position++;
    }
}
int main()
{
    unsigned int iNo1 = 0;
    unsigned int iNo2 = 0;

    cout<<"Enter First number : "<<endl;
    cin>>iNo1;

    cout<<"Enter second number : "<<endl;
    cin>>iNo2;

    CommonBit(iNo1, iNo2);

    return 0;
}