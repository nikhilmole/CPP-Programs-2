#include<iostream>
using namespace std;

void Convert(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        cout<<(char)(ch + 32)<<endl;
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        cout<<(char)(ch - 32)<<endl;
    }
    else
    {
        cout<<ch;
    }
}
int main()
{
    char cValue = '\0';

    cout<<"Enter the character : "<<endl;
    cin>>cValue;

    Convert(cValue);

    return 0;
}