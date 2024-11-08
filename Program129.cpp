#include<iostream>
using namespace std;

int FirstOcc(char *str, char ch)
{
    int iPose = -1; 
    int iFreq = 1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPose = iFreq;
            break;
        }
        str++;
        iFreq++;
    }
    return iPose;
}
int main()
{
    char Arr[50];
    char ch = '\0';
    int iRet = 0;

    printf("Enter the String : ");  
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&ch);

    iRet = FirstOcc(Arr,ch);

    printf("The first occurance is : %d",iRet);

    return 0;
}