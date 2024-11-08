#include<iostream>
using namespace std;

int CountWhiteSpaces(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    cout<<"Enter the String : "<<endl;
    cin.getline(Arr,50);

    iRet = CountWhiteSpaces(Arr);

    cout<<"The whitespaces count is : "<<iRet;

    return 0;
}