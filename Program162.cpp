#include<iostream>
using namespace std;

void Display(int iNum)
{
    if(iNum < 0)
    {
        iNum = -iNum;
    }

    if(0 < iNum)
    {
        cout<<iNum<<"\t";
        iNum--;
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