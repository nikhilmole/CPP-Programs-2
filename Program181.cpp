#include<iostream>
using namespace std;

unsigned int OffBit(unsigned int iNum)
{
    unsigned int iResult = 0;
    unsigned int iMask = 0xFFFFFDBF;

    iResult = iMask & iNum;

    return iResult;
}
int main()
{
    unsigned int iNo = 0;
    unsigned int iRet = 0;

    printf("Enter the number : ");;
    scanf("%u",&iNo);

    iRet = OffBit(iNo);
    printf("The Updated number is : %u",iRet);

    return 0;
}