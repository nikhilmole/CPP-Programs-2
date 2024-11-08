#include<iostream>
using namespace std;

void Display(int iNum, char ch)
{
    static int i = 1;

    if(iNum < 0)
    {
        iNum = -iNum;
    }

    if((i <= iNum)&&(ch != ' '))
    {
        cout<<ch<<"\t";
        ch++;
        i++;
        Display(iNum, ch);
    }
}
int main()
{
    int iNo = 0;
    char ch = '\0';

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    cout<<"Enter the character : "<<endl;
    cin>>ch;

    Display(iNo,ch);

    return 0;
}