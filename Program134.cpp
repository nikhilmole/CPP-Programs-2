#include<iostream>
using namespace std;

void StrCapCpy(char *str, char *dest)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
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
    int iNo = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    StrCapCpy(Arr,Brr);

    printf(Brr);

    return 0;
}