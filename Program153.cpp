#include<iostream>
using namespace std;

void Display(char *str)
{   
    int length = 0;
    int i = 0;
    int j = 0;

    while(str[length] != '\0')
    {
        length++;
    }

    for(i = 0; i < length; i++)
    {
        for(j = 0; j < length; j++)
        {
            if(i >= j)
            {
                cout<<str[j]<<"\t";
            }
            else
            {
                cout<<"\t";
            }
        }
        cout<<endl;
    }
}
int main()
{
    char Arr[50];

    cout<<"Enter the String : "<<endl;
    cin.getline(Arr,50);

    Display(Arr);

    return 0;
}