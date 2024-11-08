#include<iostream>
using namespace std;

void DisplaySchedule(char ch)
{
    switch(ch)
    {
        case 'A':
            cout<<"Exam of division A at 7 AM"<<endl;
            break;
        
        case 'B':
            cout<<"Exam of division B at 8 AM"<<endl;
            break;

        case 'C':
            cout<<"Exam of division C at 9 AM"<<endl;
            break;

        case 'D':
            cout<<"Exam of division D at 10 AM"<<endl;
            break;
        
        default:
            cout<<"Invalid option "<<endl;
            break;
    }
}
int main()
{
    char cValue = '\0';

    cout<<"Enter the division : "<<endl;
    cin>>cValue;

    DisplaySchedule(cValue);

    return 0;
}