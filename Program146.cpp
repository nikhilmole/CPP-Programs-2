#include<iostream>
using namespace std;

bool Palindrome(char *str)
{
    char *First = str;
    char *Last = str;

    while(*Last != '\0')
    {
        Last++;
    }
    Last--;

    while(First <= Last)
    {
        if(*First >= 'A' && *First <= 'Z')
        {
            *First = *First + 32;
        }

        if(*Last >= 'A' && *Last <= 'Z')
        {
            *Last = *Last + 32;
        }   
        if(*First != *Last)
        {
            return false;
        }

        First++;
        Last--;
    }
    
    return true;
}

int main()
{
    char Arr[50];
    bool bRet = false;
    cout<<"enter the String : "<<endl;
    cin.getline(Arr, 50);

    bRet = Palindrome(Arr);

    if(bRet == true)
    {
        cout<<"The string is palindrom"<<endl;
    }
    else
    {
        cout<<"The String is not Palindrome"<<endl;
    }

    return 0;
}