#include<iostream>
using namespace std;

void StrCpy(char *str, char *dest, int iCnt)
{
    while((*str != '\0')&&(iCnt > 0))
    {
        *dest = *str;

        str++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}
int main()
{
    char Arr[50];
    char Brr[50];
    int iNo = 0;

    cout<<"Enter the String : "<<endl;
    cin.getline(Arr,50);

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    StrCpy(Arr,Brr,iNo);
    
    cout<<"Updated string is : "<<Brr;
    return 0;
}