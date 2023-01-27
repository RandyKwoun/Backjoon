#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int iFirst, iLast;

    int iN;

    int iTemp, iMin, iAns;

    cin >> iFirst >> iLast;

    cin >> iN;

    cin >> iTemp;

    iMin = abs(iTemp - iLast);

    for(int i = 1; i < iN; i++) // Find closest number
    {
        cin >> iTemp;
        iTemp = abs(iTemp - iLast);
        iMin = min(iTemp, iMin);
    }

    iMin++;

    iAns = min(iMin, abs(iFirst - iLast));

    cout << iAns << endl;

    return 0;
}
