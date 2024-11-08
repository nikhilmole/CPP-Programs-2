#include<iostream>
using namespace std;

bool StrCmpX(char *str, char *dest)
{
    while((*str != '\0')&&(*dest != '\0'))
    {
        if(*str != *dest)
        {
            break;
        }
        str++;
        dest++;
    }

    if((*str == '\0')&&(*dest == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char Arr[50];
    char Brr[50];
    bool bRet = false;

    cout<<"Enter the First string : "<<endl;
    cin.getline(Arr,50);

    cout<<"Enter the Second String : "<<endl;
    cin.getline(Brr,50);

    bRet = StrCmpX(Arr, Brr);

    if(bRet == true)
    {
        cout<<"Strings Are Same"<<endl;
    }
    else
    {
        cout<<"String not same"<<endl;
    }
    return 0;
}