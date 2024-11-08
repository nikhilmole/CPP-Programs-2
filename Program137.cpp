#include<iostream>
using namespace std;

void StrCpyRev(char *str, char *dest)
{
    char *End = str;

    while(*End != '\0')
    {
        End++;
    }
    End--;

    while(End >= str)
    {
        *dest = *End;

        dest++;
        End--;
    }
    *dest = '\0';
}
int main()
{
    char Arr[50];
    char Brr[50];

    cout<<"Enter the String : "<<endl;
    cin.getline(Arr,50);

    StrCpyRev(Arr, Brr);

    cout<<Brr;

    return 0;
}