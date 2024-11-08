#include<iostream>
using namespace std;

bool ChkValue(char ch)
{
    bool bFlag = false;

    if((ch >= '0')&&(ch <= '9'))
    {
        bFlag = true;
    }
    return bFlag;
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout<<"Enter the character : "<<endl;
    cin>>cValue;

    bRet = ChkValue(cValue);
    if(bRet == true)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    return 0;
}