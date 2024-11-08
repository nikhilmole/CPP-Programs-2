#include<iostream>
using namespace std;

void Display(int iNum)
{
    static int i = 1;

    if(iNum < 0)
    {
        iNum = -iNum;
    }

    if(i <= iNum)
    {
        cout<<i<<"\t"<<"*\t";
        i++;
        Display(iNum);
    }
}
int main()
{
    int iNo = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iNo;

    Display(iNo);

    return 0;
}