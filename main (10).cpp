/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void Input(int& month, int& year);
void DaysOfMonth(int month, int year);

int main()
{
    int month,year;
    Input(month,year);
    DaysOfMonth (month,year);
    return 0;
}

void Input(int& month, int& year)
{
    cout<<"Enter a month and year: ";
    cin>>month;
    cin>>year;
}

void DaysOfMonth(int month,int year)
{
    switch(month)
    {
        case 1:
        cout<<"January has 31 days in the year "<<year<<endl;
        break;
        case 2:
        if(year%4==0 && year%100 !=0 || year%400==0)
        cout<<"February has 29 days in the year "<<year<<endl;
        else
        cout<<"February has 28 days in the year "<<year<<endl;
        break;
        case 3:
        cout<<"March has 31 days in the year "<<year<<endl;
        break;
        case 4:
        cout<<"April has 30 days in the year "<<year<<endl;
        break;
        case 5:
        cout<<"May has 31 days in the year "<<year<<endl;
        break;
        case 6:
        cout<<"June has 30 days in the year "<<year<<endl;
        break;
        case 7:
        cout<<"July has 31 days in the year "<<year<<endl;
        break;
        case 8:
        cout<<"August has 31 days in the year "<<year<<endl;
        break;
        case 9:
        cout<<"September has 30 days in the year "<<year<<endl;
        break;
        case 10:
        cout<<"October has 31 days in the year "<<year<<endl;
        break;
        case 11:
        cout<<"November has 30 days in the year "<<year<<endl;
        break;
        case 12:
        cout<<"December has 31 days in the year "<<year<<endl;
        break;

        
    }
}
