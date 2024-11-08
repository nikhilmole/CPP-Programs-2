#include<iostream>
using namespace std;

bool StrCmpNX(char *str, char *dest, int iNo)
{
    while((*str != '\0')&&(*dest != '\0')&&(iNo > 0))
    {
        if(*str != *dest)
        {
            return false;
        }
        str++;
        dest++;
        iNo--;
    }

    if(iNo == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char Arr[50];
    char Brr[50];

    bool bRet = false;
    int iNo = 0;

    cout<<"Enetr the First String : "<<endl;    
    cin.getline(Arr,50);

    cout<<"Enter the Second String : "<<endl;
    cin.getline(Brr,50);

    cout<<"Enter the number : "<<endl;
    cin>>iNo;
    
    bRet = StrCmpNX(Arr, Brr, iNo);

    if(bRet == true)
    {
        cout<<"First"<<iNo<<"Letters are same"<<endl;
    }
    else
    {
        cout<<"First"<<iNo<<"Letters are not same"<<endl;
    }
    return 0;
}