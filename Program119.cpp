#include<iostream>
using namespace std;

int Dif(char *str)
{
    int iCountCap = 0;
    int iCountSmall = 0;
    int Ans = 0;

    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            iCountCap++;
        }
        else
        {
            iCountSmall++;
        }
        str++;
    }

    Ans =  iCountCap - iCountSmall  ;
    return Ans;
}
int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);

    iRet = Dif(Arr);

    printf("The dif is : %d",iRet);

    return 0;
}   