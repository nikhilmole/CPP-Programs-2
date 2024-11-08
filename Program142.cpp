#include<iostream>
using namespace std;

void StrCntN(char *str, char *dest, int iNo)
{
    while(*str != '\0')
    {
        str++;
    }
    str--;  

    while((iNo > 0)&&(*dest != '\0'))
    {
        *str = *dest;

        str++;
        dest++;
        iNo--;
    }
    *str = '\0';
}
int main()
{
    char Arr[50];
    char Brr[50];
    int iNo = 0;

    cout<<"Enter the First String : "<<endl;
    cin.getline(Arr,50);

    cout<<"Enter the second String : "<<endl;
    cin.getline(Brr,50);

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    StrCntN(Arr, Brr, iNo);

    cout<<Arr;

    return 0;
}