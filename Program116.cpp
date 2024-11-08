#include<iostream>
using namespace std;

void ASCIIDisplay(char ch)
{
    int i = 0;

    for(i = 0; i <= 255; i++)
    {
        if(i == ch)
        {
            cout<<i<<"\t";
            cout<<hex<<i<<"\t";
            cout<<oct<<i<<"\t";
        }
    }
}
int main()
{
    char cValue = '\0';

    cout<<"Enter the character : "<<endl;
    cin>>cValue;

    ASCIIDisplay(cValue);

    return 0;
}