#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Program194
{
    public:
        PNODE First;
        int iCnt;
    
    public:
        Program194();

        void Display();
        int Count();
        void InsertFirst(int iNo);
        int SearchFirstOcc(int iNo);
};

Program194::Program194()
{
    First = NULL;
    iCnt = 0;
}
void Program194::Display()
{
    PNODE temp = NULL;
    temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp ->next;
    }
    cout<<"NULL"<<endl;
}
int Program194::Count()
{
    return iCnt;
}
void Program194::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCnt++;
}
int Program194::SearchFirstOcc(int iNo)
{
    PNODE temp = NULL;
    temp = First;
    int iPos = 1;

    while(temp != NULL)
    {
        if(temp->data == iNo)
        {
            return iPos;
            break;
        }
        iPos++;
        temp = temp->next;
    }
    return -1;
}
int main()
{
    Program194 obj;

    int iRet = 0;

    obj.InsertFirst(70);
    obj.InsertFirst(60);
    obj.InsertFirst(50);
    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);
    
    obj.Display();
    iRet = obj.Count();
    printf("The Node count is : %d\n",iRet);

    iRet = obj.SearchFirstOcc(30);
    printf("First occurance is : %d",iRet);
    return 0;
}