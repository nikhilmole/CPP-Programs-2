#include<iostream>
using namespace std;

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[50];
    int iRet = 0;

    cout<<"Enter the string : "<<endl;
    cin.getline(Arr,50);

    iRet = CountSmall(Arr);
    cout<<"The small Leteres are : "<<iRet;

    return 0;
}