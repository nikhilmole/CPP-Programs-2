#include<iostream>
using namespace std;

void ASCII()
{
    int iNum = 0;

    for(iNum = 0; iNum <= 255; iNum++)
    {
        cout<<iNum<<"="<<(char)iNum<<endl;
    }
}

int main()
{
    ASCII();

    return 0;
}