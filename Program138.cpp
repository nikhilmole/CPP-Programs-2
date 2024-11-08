#include<iostream>
using namespace std;

void WhiteSpaceRemoval(char *str, char *dest)
{
    while(*str != '\0')
    {
        if(*str != ' ')
        {
            *dest = *str;

            dest++;
        }
        str++;
    }
    *dest = '\0';
}
int main()
{   
    char Arr[50];
    char Brr[50];

    cout<<"Entyer the String : "<<endl;
    cin.getline(Arr,50);

    WhiteSpaceRemoval(Arr, Brr);
    cout<<Brr;

    return 0;
}