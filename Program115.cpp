#include<iostream>
using namespace std;

bool ChkSpecial(char ch)
{
    bool bFlag = false;

    if((ch == '!')||(ch == '@')||(ch == '#')||(ch == '$')||(ch == '%')||(ch == '^')||(ch == '&')||(ch == '*'))
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

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        cout<<"It is Spcial symbol"<<endl;
    }
    else
    {
        cout<<"It is not Spcial symbol"<<endl;
    }

    return 0;
}