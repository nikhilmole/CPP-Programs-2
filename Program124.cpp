#include<iostream>
using namespace std;

void Toggle(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a')&&(*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char Arr[50];

    cout<<"Enter the string : "<<endl;
    cin.getline(Arr,50);

    Toggle(Arr);

    cout<<Arr;
    return 0;
}