#include<iostream>
using namespace std;

bool ChkChar(char *str, char Let)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == Let)
        {
            bFlag = true;
        }
        str++;
    }
    return bFlag;
}
int main()
{
    char Arr[50];
    char ch = '\0';
    bool bRet = false;

    cout<<"Enter the string : "<<endl;
    cin.getline(Arr,50);

    cout<<"enter the character : "<<endl;
    cin>>ch;
    
    bRet = ChkChar(Arr,ch);

    if(bRet == true)
    {
        cout<<"character is present"<<endl;
    }
    else
    {
        cout<<"Character is not present"<<endl;
    }

    return 0;
}