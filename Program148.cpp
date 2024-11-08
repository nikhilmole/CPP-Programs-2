#include<iostream>
using namespace std;

int MaximumWordCount(char *str)
{
    int CurrentCount = 0;
    int MaxCount = 0;

    while(*str != '\0')
    {
        if(*str == '\0' || *str == ' ')
        {
            if(CurrentCount > MaxCount)
            {
                MaxCount = CurrentCount;
            }
            CurrentCount = 0;
        }
        else
        {
            CurrentCount++;
        }
        str++;
    }

    if(CurrentCount > MaxCount)
    {
        MaxCount = CurrentCount;
    }
    return MaxCount;
}
int main()
{
    char Arr[50];
    int iRet = 0;

    cout<<"enter the String : "<<endl;
    cin.getline(Arr,50);

    iRet = MaximumWordCount(Arr);

    cout<<iRet<<endl;

    return 0;
}