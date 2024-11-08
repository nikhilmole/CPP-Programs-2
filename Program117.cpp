#include<iostream>
using namespace std;

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
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

    iRet = CountCapital(Arr);

    cout<<"The capital letters are : "<<iRet;

    return 0;
}