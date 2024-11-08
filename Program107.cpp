#include<iostream>
using namespace std;

bool ChkAlpha(char ch)
{
    bool bFlag = false;

    if((ch >= 'A')&&(ch <= 'Z')||(ch >= 'a')&&(ch <= 'z'))
    {
        bFlag = true;
    }

    return bFlag;
}
int main()
{
    char cvalue = '\0';
    bool bRet = false;

    cout<<"Enter the character : "<<endl;
    cin>>cvalue;

    bRet = ChkAlpha(cvalue);

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