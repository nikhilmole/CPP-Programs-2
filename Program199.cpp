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
        void PerfectNum();
};

SinglyLL::SinglyLL()
{
    First = NULL;
    iCnt = 0;
}
void SinglyLL::Display()
{
    PNODE temp = First;

    if(temp == NULL)
    {
        cout<<"The ll is empty"<<endl;
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
void SinglyLL::InsertFirst(int No)
{
    PNODE newn = new NODE;
    newn->next = NULL;
    newn->data = No;

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
void SinglyLL::PerfectNum()
{
    int i = 0;
    int iSum = 0;
    PNODE temp = First;
    int iNum = 0;

    while(temp != NULL)
    {
        iNum = temp->data;
        iSum = 0;
        for(i = 1; i <= iNum / 2; i++)
        {
            if(iNum % i == 0)
            {
                iSum = iSum + i;
            }
        }
        if((iSum == iNum)&&(iNum != 1))
        {
            cout<<iNum<<" is a perfect number"<<endl;
        }
        temp = temp->next;
    }
}

int main()
{
    SinglyLL obj;

    obj.InsertFirst(89);
    obj.InsertFirst(6);
    obj.InsertFirst(41);
    obj.InsertFirst(17);
    obj.InsertFirst(28); 
    obj.InsertFirst(11);

    obj.Display();

    obj.PerfectNum();

    return 0;
}