#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> stkAns; //Save the numbers which did not get their snack.

    int iOrder = 1;
    int iLength;

    cin >> iLength;

    int iArr[1000] = {}; //Save the value here

    //Getting values
    for(int i = 0; i < iLength; i++)
        cin >> iArr[i];

    //Decide save or delete if the number can get its snack.
    for(int i = 0; i < iLength; i++)
    {
        //If the this order can go to a snack bar straightly
        if(iArr[i] == iOrder)
        {
            iOrder++;
        }

        else if(!stkAns.empty())
        {
            if(iOrder == stkAns.top())
            {
                iOrder++;
                stkAns.pop();
                i--;
            }

            else
            {
                stkAns.push(iArr[i]);
            }
        }

        //If this order has to go to wait line
        else
        {
            stkAns.push(iArr[i]);
        }
    }

    //Make the stack empty.
    while(!stkAns.empty())
    {
        if(iOrder == stkAns.top())
        {
            stkAns.pop();
            iOrder++;
        }

        else
        {
            cout << "Sad" << '\n';
            return 0;
        }
    }

    cout << "Nice" << '\n';

    return 0;
}
