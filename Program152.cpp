#include<iostream>
using namespace std;

void Display(char *str)
{
    int iCnt = 0;
    int i = 0;
    int j = 0;

    while(str[iCnt] != '\0')
    {
        iCnt++;
    }
    
    for(i = 0; i < iCnt; i++)
    {
        for(j = 0; j < iCnt; j++)
        {
            if(j < iCnt - i)
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