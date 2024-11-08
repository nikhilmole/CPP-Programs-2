#include<iostream>
using namespace std;

void StrLowertoUpper(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
} 
int main()
{
    char Arr[50];

    cout<<"Enyer the String : "<<endl;
    cin>>Arr;

    StrLowertoUpper(Arr);
    
    printf(Arr);

    return 0;
}