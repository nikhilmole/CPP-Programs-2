#include<iostream>
using namespace std;

bool ChkVowels(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == 'A')||(*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U')||
        (*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
        {
            bFlag = true;
        }
        str++;
    }
    
    return bFlag;
}
int main()
{
    char Arr[50];
    bool bRet = false;

    cout<<"Enter the string : "<<endl;
    cin>>Arr;

    bRet = ChkVowels(Arr);

    if(bRet == true)
    {
        cout<<"Vowel present"<<endl;
    }
    else
    {
        cout<<"Vowels not present"<<endl;
    }

    return 0;
}