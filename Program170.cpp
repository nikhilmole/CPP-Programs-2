#include<iostream>
using namespace std;

int CoutWhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        CoutWhiteSpace(str);
    }

    return iCount;
}
int main()
{
    char Arr[50];
    int iRet = 0;

    cout<<"Enter the String : "<<endl;
    cin.getline(Arr,50);
    
    iRet = CoutWhiteSpace(Arr);

    cout<<"The white spaces count is : "<<iRet;

    return 0;
}