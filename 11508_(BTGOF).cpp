#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int Num[100002] = {};
    int iNum;

    cin >> iNum;

    for(int i = 0; i < iNum; i++)
        cin >> Num[i];

    sort(Num, Num + iNum, greater<int>());

    int iAns = 0;

    for(int i = 0; i < iNum; i++)
    {
        if((i + 1) % 3 == 0)
            continue;

        else
            iAns += Num[i];
    }

    cout << iAns << endl;

    return 0;
}
