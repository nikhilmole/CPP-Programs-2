#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        cout<<"*\t";
        i++;
        Display(iNo);
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