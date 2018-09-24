#include <iostream>

using namespace std;

int main()
{
    int sMonth=2;
    int sDay=18;
    int month, day;
    cout<<"Please input the month: ";
    cin>>month;
    cout<<"Please input the day: ";
    cin>>day;
    if (month<sMonth)
    {
        cout<<"Before";
    }
    else if (month>sMonth)
    {
        cout<<"After";
    }
    else
    {
        if (day<sDay)
        {
            cout<<"Before";
        }
        else if (day>sDay)
        {
            cout<<"After";
        }
        else
        {
            cout<<"Special";
        }
    }
    return 0;
}