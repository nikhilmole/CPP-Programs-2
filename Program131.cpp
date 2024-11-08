#include<iostream>
using namespace std;

void RevString(char *str)
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

    cout<<"Enter the string : "<<endl;
    cin.getline(Arr,50);

    RevString(Arr);

    cout<<"Updated string is : "<<Arr;

    return 0;
}