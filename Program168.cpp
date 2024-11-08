#include<iostream>
using namespace std;

int Facto(int iNum)
{
    static int ifacto = 1;
    static int i = 1;

    if(i <= iNum)
    {
        ifacto = ifacto * i;
        i++;
        Facto(iNum);
    }
    return ifacto;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    iRet = Facto(iNo);

    cout<<"The factorial is : "<<iRet;
    return 0;
}