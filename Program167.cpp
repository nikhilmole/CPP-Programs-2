#include<iostream>
using namespace std;

int Strlen(char *str)
{
    static int len = 0;

    if(*str != '\0')
    {
        str++;
        len++;
        Strlen(str);
    }
    return len;
}
int main()
{
    char Arr [50];
    int iRet = 0;

    cout<<"Enter the character : "<<endl;
    cin.getline(Arr,50);

    iRet = Strlen(Arr);

    cout<<"String length is : "<<iRet;

    return 0;
}