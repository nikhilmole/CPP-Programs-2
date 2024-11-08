#include<iostream>
using namespace std;

void RevStringWithToggle(char *str)
{
    char *First = str;
    char *Last = str;
    char temp = '\0';

    while(*Last != '\0')
    {
        Last++;
    }
    Last--;

    while(First < Last)
    {
        if((*First >= 'A')&&(*First <= 'Z'))
        {
            *First = *First + 32;
        }
        else if((*First >= 'a')&&(*First <= 'z'))
        {
            *First = *First - 32;
        }

        if((*Last >= 'A')&&(*Last <= 'Z'))
        {
            *Last = *Last + 32;
        }
        else if((*Last >= 'a')&&(*Last <= 'z'))
        {
            *Last = *Last - 32;
        }

        temp = *Last;
        *Last = *First;
        *First = temp;

        *First++;
        *Last--;

    }
}
int main()
{
    char Arr[50];

    cout<<"Enter the String : "<<endl;
    cin.getline(Arr,50);

    RevStringWithToggle(Arr);

    cout<<Arr;

    return 0;
}