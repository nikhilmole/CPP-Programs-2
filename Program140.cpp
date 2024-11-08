#include<iostream>
using namespace std;

void StrCpyCnvertSmall(char *str, char* dest)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *dest = *str + 32;
        }
        else if((*str >= 'a')&&(*str <= 'z'))
        {
            *dest = *str;
        }
        else
        {
            *dest = *str;
        }
        dest++;
        str++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[50];
    char Brr[50];

    cout<<"Enter the String : "<<endl;
    cin.getline(Arr,50);

    StrCpyCnvertSmall(Arr, Brr);

    cout<<Brr;

    return 0;
}