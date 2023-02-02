#include <iostream>

using namespace std;

int main(void)
{
    int iN, iAns;
    char cInput;
    bool bLL = false;

    cin >> iN;

    iAns = iN;

    for(int i = 0; i < iN; i++)
    {
        cin >> cInput;

        if(cInput == 'L')
        {
            bLL = true;
            cin >> cInput;
            iAns--;
            i++;
        }
    }

    if(bLL)
    {
        cout << (iAns + 1) << endl;
        return 0;
    }

    cout << iAns << endl;

    return 0;
}
