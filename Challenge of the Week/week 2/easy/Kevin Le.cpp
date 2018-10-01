#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int happy=0;
    int sad=0;
    string input;
    getline(cin,input);
    for(unsigned i=0;i<input.size()-2;i++)
    {
        string word;
        for(unsigned n=i;n<=i+2;n++)
        {
            word+=input[n];
        }
        if (word.compare(":-)"))happy++;
        if (word.compare(":-("))sad++;
    }
    if (happy==sad)cout<<"unsure";
    else if (happy<sad)cout<<"happy";
    else cout<<"sad";
    return 0;
}
