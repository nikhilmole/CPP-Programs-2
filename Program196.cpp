#include<iostream>
using namespace std;

struct node
{
    struct node *next;
    int data;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCnt;

    public:
        SinglyLL();

        void Display();
        int Count();
        void InsertFirst(int iNo);
        int Addition();    
};

SinglyLL::SinglyLL()
{
    First = NULL;
    iCnt = 0;
}
void SinglyLL::Display()
{
    PNODE temp = NULL;
    temp = First;
    if(First == NULL)
    {
        cout<<"The whole LL is empty"<<endl;
        return;
    }

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int SinglyLL::Count()
{
    return iCnt;
}

void SinglyLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->next = NULL;
    newn->data = iNo;

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

int SinglyLL::Addition()
{
    PNODE temp = NULL;
    temp = First;

    int iAdd = 0;

    while(temp != NULL)
    {
        iAdd = iAdd + temp->data;
        temp = temp->next;
    }

    return iAdd;
}

int main()
{

    SinglyLL obj;

    int iRet = 0;

    obj.InsertFirst(5);
    obj.InsertFirst(4);
    obj.InsertFirst(3);
    obj.InsertFirst(2);
    obj.InsertFirst(1);

    obj.Display();
    iRet = obj.Count();
    cout<<"The node count is : "<<iRet<<endl;

    iRet = obj.Addition();
    cout<<"The node Additon is : "<<iRet<<endl;
    return 0;
}