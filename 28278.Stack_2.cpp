#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> stkAns;

    int T;

    cin >> T;

    for(int i = 0; i < T; i++)
    {
        int iNum;
        cin >> iNum;

        if(iNum == 1)
        {
            int iTemp;
            cin >> iTemp;
            stkAns.push(iTemp);
        }

        else if(iNum == 2)
        {
            if(stkAns.empty())
                cout << "-1" << '\n';

            else
            {
                int iTemp = stkAns.top();
                cout << iTemp << '\n';
                stkAns.pop();
            }
        }

        else if(iNum == 3)
        {
            int iTemp = stkAns.size();
            cout << iTemp << '\n';
        }

        else if(iNum == 4)
        {
            if(stkAns.empty())
                cout << "1" << '\n';

            else
                cout << "0" << '\n';
        }

        else if(iNum == 5)
        {
            if(stkAns.empty())
                cout << "-1" << '\n';

            else
            {
                int iTemp = stkAns.top();
                cout << iTemp << '\n';
            }
        }
    }

    return 0;
}
