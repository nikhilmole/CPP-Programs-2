#include<iostream>
using namespace std;

bool ChkCapitalorSmall(char ch)
{
    bool bFlag = false;

    if((ch >= 'A')&&(ch <= 'Z'))
    {
        bFlag = true;
    }
    return bFlag;
}
int main()
{
    bool bRet = false;
    char cValue = '\0';

    cout<<"Enter the charecter : "<<endl;
    cin>>cValue;

    bRet = ChkCapitalorSmall(cValue);

    if(bRet == true)
    {
        cout<<"Capital character"<<endl;
    }
    else
    {
        cout<<"Small character"<<endl;
    }
    return 0;
}