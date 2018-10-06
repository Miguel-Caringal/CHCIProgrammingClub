#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Mountain
{
public:
    int nComb();
    Mountain (int n, int k);

private:
    void next(bool add, int currHeight, int nUp, int w, int currPeaks, vector<bool> orient);
    int nPeaks;
    vector <vector <bool>> possibilities; // 0 for up (/), 1 for down (\)
};

Mountain::Mountain(int n, int k)
{
    nPeaks = k;

    if(n > 0 && k > 0)
    {
        vector <bool> orient;
        next(0, 0, n, 0, 0, orient);
    }
}

void Mountain::next(bool add, int currHeight, int nUp, int w, int currPeaks, vector<bool> orient)
{
    orient.push_back(add);
    if(!add)
    {
        if(w == 0 || orient[w-1] == 1)
        {
            currPeaks++;
            if(currPeaks > nPeaks)
            {
                return;
            }
        }
        nUp--;
        currHeight++;
    }
    else
    {
        currHeight--;
    }
    if(nUp < (nPeaks - currPeaks))
    {
        return;
    }
    w++;

    if(nUp > 0)
    {
        next(0, currHeight, nUp, w, currPeaks, orient);
    }
    if(currHeight > 0)
    {
        next(1, currHeight, nUp, w, currPeaks, orient);
    }
    if(nUp + currHeight == 0)
    {
        possibilities.push_back(orient);
        /* Showing the mountains that can be legally generated
        for(int i=0;i<(int)orient.size();i++)
        {
            if(!orient[i])
            {
                cout << "/";
            }
            else
            {
                cout << "\\";
            }
        }
        cout << endl;
        */
    }
}

int Mountain::nComb()
{
    return possibilities.size();
}

int main()
{
    int n;
    int k;
    string sn;
    string sk;
    stringstream ssn;
    stringstream ssk;
    cin >> sn;
    cin >> sk;
    ssn << sn;
    ssk << sk;
    ssn >> n;
    ssk >> k;
    Mountain m(n, k);
    cout << m.nComb();
    return 0;
}

