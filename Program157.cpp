#include<iostream>
using namespace std;

void Display(int iNum)
{
    static int i = 1;

    if(i <= iNum)
    {
        cout<<i<<"\t";
        i++;
        Display(iNum);
    }
}
int main()
{
    int iNo = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    Display(iNo);

    return 0;
}