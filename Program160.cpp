#include<iostream>
using namespace std;

void Display(int iNum)
{
    static int i = 0;

    if(i <= iNum)
    {
        cout<<"*"<<"\t";
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