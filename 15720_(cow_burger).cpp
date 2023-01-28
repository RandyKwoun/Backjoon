#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int iHam, iPot, iJuc;
    int Ham[1001] = {0};
    int Pot[1001] = {0};
    int Juc[1001] = {0};

    cin >> iHam >> iPot >> iJuc;

    for(int i = 0; i < iHam; i++)
        cin >> Ham[i];
    
    for(int i = 0; i < iPot; i++)
        cin >> Pot[i];

    for(int i = 0; i < iJuc; i++)
        cin >> Juc[i];

    sort(Ham, Ham + iHam, greater<int>());
    sort(Pot, Pot + iPot, greater<int>());
    sort(Juc, Juc + iJuc, greater<int>());

    int iSet = min(iHam, iPot);
    iSet = min(iSet, iJuc);

    int iAns1 = 0;
    int iAns2 = 0;

    for(int i = 0; i < iSet; i++)
    {
        iAns1 += Ham[i] + Pot[i] + Juc[i];
        iAns2 += ((Ham[i] + Pot[i] + Juc[i]) * 0.9);
    }
    
    for(int i = iSet; i < iHam; i++)
    {
        iAns1 += Ham[i];
        iAns2 += Ham[i];
    }

    for(int i = iSet; i < iPot; i++)
    {
        iAns1 += Pot[i];
        iAns2 += Pot[i];
    }

    for(int i = iSet; i < iJuc; i++)
    {
        iAns1 += Juc[i];
        iAns2 += Juc[i];
    }

    cout << iAns1 << endl;
    cout << iAns2 << endl;

    return 0;
}
