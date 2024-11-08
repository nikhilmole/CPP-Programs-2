#include<iostream>
using namespace std;

bool ChkAlphaCapi(char ch)
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
    int i = 0;
    int *P = NULL;
    char cValue = '\0';
    bool bRet = false;

    cout<<"Enter the character : "<<endl;
    cin>>cValue;

    bRet = ChkAlphaCapi(cValue);

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