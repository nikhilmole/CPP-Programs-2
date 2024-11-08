#include<iostream>
using namespace std;

int ChkFreq(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[50];
    char ch = '\0';
    int iRet = 0;

    cout<<"Enter the String : "<<endl;
    cin.getline(Arr,50);

    cout<<"Enter the character : "<<endl;
    cin>>ch;

    iRet = ChkFreq(Arr,ch);

    cout<<iRet;

    return 0;
}