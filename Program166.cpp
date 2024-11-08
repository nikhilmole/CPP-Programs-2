#include<iostream>
using namespace std;

int DigiSum(int iNum)
{
    static int i = 0;
    int iDigit = 0;
    static int iSum = 0;

    if(iNum > 0)
    {
        iDigit = iNum % 10;
        iSum = iSum + iDigit;
        iNum = iNum / 10;
        DigiSum(iNum);
    }
    return iSum;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iNo);

    iRet = DigiSum(iNo);
    printf("Summation of digits are : %d",iRet);

    return 0;
}