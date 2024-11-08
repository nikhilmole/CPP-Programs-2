#include<iostream>
using namespace std;

void StrCpy(char *str, char *dest)
{
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            *dest = *str;

            dest++;
        }
        str++;
    }
}
int main()
{
    char Arr[50];
    char Brr[50];

    cout<<"Enter the String : "<<endl;
    cin.getline(Arr,50);

    StrCpy(Arr,Brr);

    cout<<"Small Letteres are : "<<Brr;

    return 0;
}