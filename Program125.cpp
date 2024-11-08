#include<iostream>
using namespace std;

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0')&&(*str <= '9'))
        {
            cout<<*str;
        }
        str++;
    }
}
int main()
{
    char Arr[50];

    cout<<"Enter the String : "<<endl;
    cin.getline(Arr,50);

    DisplayDigits(Arr);

    return 0;
}