#include<iostream>
using namespace std;

int CountSmall(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            iCount++;
        }
        str++;
        CountSmall(str);
    }
    return iCount;
}
int main()
{
    char Arr[50];
    int iRet = 0;

    cout<<"Enter the String  : "<<endl;
    cin.getline(Arr,50);

    iRet = CountSmall(Arr);
    cout<<iRet;

    return 0;
}