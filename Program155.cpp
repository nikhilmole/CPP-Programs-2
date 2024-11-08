#include<iostream>
using namespace std;

void Display(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        int j = 0;
        while(str[j] != '\0')
        {
            if((str[j] >= 'A')&&(str[j] <= 'Z'))
            {
                str[j] = (char)(str[j] + 32);
            }   
            cout<<str[j]<<"\t";
            j++;
        }
        i++;
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