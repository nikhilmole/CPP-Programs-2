#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
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
        int Min();
};

SinglyLL::SinglyLL()
{
    First = NULL;
    iCnt = 0;
}

void SinglyLL::Display()
{
    PNODE temp = First;

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
    PNODE newn = new NODE;

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

int SinglyLL::Min()
{
    int iMax = 0;
    int iMin = 0;
    PNODE temp = First;

    while(temp != NULL)
    {
        iMin = temp->data;

        if(iMax > iMin)
        {
            iMin = iMax;
        }

        temp = temp->next;
    }

    return iMin;
}

int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(11);
    obj. InsertFirst(101);
    obj.InsertFirst(201);
    obj.InsertFirst(111);
    obj.InsertFirst(51);

    obj.Display();
    iRet = obj.Count();
    cout<<"The node couont is :"<<iRet<<endl;

    iRet = obj.Min();
    cout<<"The min number is : "<<iRet<<endl;

    return 0;
}