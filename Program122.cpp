#include<iostream>
using namespace std;

void StrUpperToLower(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
    
}
int main()
{
    char Arr[50];

    cout<<"Enter the String : "<<endl;
    cin.getline(Arr,50);

    StrUpperToLower(Arr);
    cout<<Arr;

    return 0;
}