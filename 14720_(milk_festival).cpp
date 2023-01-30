#include <iostream>

using namespace std;

int main(void)
{
    int iAns = 0, iTemp, iMilk = 0, iNum;

    cin >> iNum;

    for(int i = 0; i < iNum; i++)
    {
       cin >> iTemp;

       if(iMilk == iTemp)
       {
            iMilk++;
            iAns++;

            if(iMilk == 3)
                iMilk = 0;
       }
    }

    cout << iAns << endl;

    return 0;
}
