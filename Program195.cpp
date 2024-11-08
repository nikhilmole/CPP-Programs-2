#include<iostream>
using namespace std;

struct node
{
    struct node *next;
    int data;
};

typedef struct node NODE;
typedef struct node* PNODE;

class NodeCL
{
    public:
        PNODE First;
        int iCnt;
    
    public:
        NodeCL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        int SearchLastOcc(int iNo);
};

NodeCL::NodeCL()
{
    First = NULL;
    iCnt = 0;
}
void NodeCL::Display()
{
    PNODE temp = NULL;
    temp = First;
    if(temp == NULL)
    {
        cout<<"LL is empty"<<endl;
        return;
    }

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int NodeCL::Count()
{
    PNODE temp = NULL;
    temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return iCnt;
}
void NodeCL::InsertFirst(int iNo)
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
}
int NodeCL::SearchLastOcc(int iNo)
{
    int iPos = -1;
    int iCnt = 1;

    PNODE temp = First;
    while(temp != NULL)
    {
        if(temp->data == iNo)
        {
            iPos = iCnt;
        }
        iCnt++;
        temp = temp->next;
    }
    return iPos;
}

int main()
{
    NodeCL obj;
    int iRet = 0;

    obj.InsertFirst(101);
    obj.InsertFirst(11);
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();
    cout<<"The node count is : "<<iRet;

    iRet = obj.SearchLastOcc(101);
    cout<<"Last occurance is : "<<iRet;

    return 0;
}
