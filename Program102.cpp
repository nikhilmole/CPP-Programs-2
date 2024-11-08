#include<iostream>
using namespace std;

int Max(int Arr[], int iLength)
{
    int i = 0; 
    int iMax = Arr[0];

    for(i = 0; i < iLength; i++)
    {
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}
int main()
{
    int i = 0; 
    int iSize = 0;
    int *P = NULL;
    int iRet = 0;

    printf("How many numbers you want to add in array : \n");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }

    printf("Enter the numbers : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&P[i]);
    }

    iRet = Max(P, iSize);
    printf("the maximum number in array is : %d",iRet);

    return 0;
}