#include<iostream>
using namespace std;

void Reverse(char *str)
{
    char *Start = str;
    char *End = str;
    char temp = '\0';

    while(*End != '\0')
    {
        End++;
    }
    End--;

    while(Start < End)
    {
        temp = *End;
        *End = *Start;
        *Start = temp;

        Start++;
        End--;
    }
}

int main()
{
    char Arr[50];

    cout<<"Enter the String : "<<endl;
    cin>>Arr;

    Reverse(Arr);
    cout<<"Reverse string is : "<<Arr;
    return 0;
}