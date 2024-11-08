#include<iostream>
using namespace std;

void StrCnt(char *str, char *dest)
{
    while(*str != '\0')
    {
        str++;
    }

    while(*dest != '\0')
    {
        *str = *dest;

        str++;
        dest++;
    }

    *str = '\0';
}
int main()
{
    char Arr[50];
    char Brr[50];

    cout<<"Enter the first String : "<<endl;
    cin.getline(Arr,50);

    cout<<"Enter the second String : "<<endl;
    cin.getline(Brr,50);

    StrCnt(Arr,Brr);

    cout<<Arr;

    return 0;
}