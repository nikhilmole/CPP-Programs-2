#include<iostream>
using namespace std;

void Display(char ch)
{
    int i = 0;

    if((ch >= 'A')&&(ch <= 'Z'))
    {
        for(i = ch; i <= 'Z'; i++)
        {
            cout<<(char)(i)<<"\t";
        }
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        for(i = ch; i <= 'z'; i++)
        {
            cout<<(char)(i)<<"\t";
        }
    }
    else
    {
        cout<<"invalid option";
    }
}
int main()
{
    char cValue = '\0';
    int iNo = 0;

    cout<<"Enter the character : "<<endl;
    cin>>cValue;

    Display(cValue);

    return 0;
}