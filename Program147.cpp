#include <iostream>
using namespace std;

int WordCount(const char *str)
{
    int iCnt = 0;
    bool inword = false;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            inword = false;
        }

        else if(!inword)
        {
            iCnt++;
            inword = true;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    cout << "Enter the String: ";
    cin.getline(Arr, 50);

    iRet = WordCount(Arr);

    cout << "Words in the string are: " << iRet << endl;

    return 0;
}
