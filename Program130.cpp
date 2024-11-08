#include<iostream>
using namespace std;

int FirstOcc(char *str, char ch)
{
    int iPose = -1;
    int iFreq = 1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPose = iFreq;
        }
        str++;
        iFreq++;
    }
    return iPose;
}
int main()
{
    char Arr[50];
    char ch = '\0';
    int iRet = 0;

    cout<<"Enter the String : "<<endl;
    cin.getline(Arr,50);

    cout<<"Enter the Charcter : "<<endl;
    cin>>ch;

    iRet = FirstOcc(Arr, ch);
    cout<<"The first occ is : "<<iRet;

    return 0;
}