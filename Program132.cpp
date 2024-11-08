#include<iostream>
using namespace std;

void StrCopy(char *str, char *dest)
{
    while(*str != '\0')
    {
        *dest = *str;

        str++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[30] = "Marvellous Multi Os";
    char Brr[30];

    StrCopy(Arr,Brr);
 
    cout<<Brr;

    return 0;
}