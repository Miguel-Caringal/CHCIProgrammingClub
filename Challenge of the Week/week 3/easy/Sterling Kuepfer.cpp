#include <iostream>

using namespace std;

int main()
{
    int angles[3];
    for(int n=0;n<3;n++)
    {
        cin>>angles[n];
    }
    if(angles[0]+angles[1]+angles[2]==180)
    {
        if(angles[0]==angles[1] && angles[1]==angles[2])
            cout<<"Equilateral"<<endl;
        else if((angles[0]==angles[1] && angles[0]!=angles[2]) or (angles[0]==angles[2] && angles[0]!=angles[1]))
            cout<<"Isosceles"<<endl;
        else if(angles[0]!=angles[1] && angles[0]!=angles[2])
            cout<<"Scalene"<<endl;
    }
    else
        cout<<"Error"<<endl;
    return 0;
}
