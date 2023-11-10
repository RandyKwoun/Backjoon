#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> deqAns;

    int iNum;

    cin >> iNum;

    for(int i = 0; i < iNum; i++)
    {
        int iInput;
        cin >> iInput;

        if(iInput == 1)
        {
            int iTemp;
            cin >> iTemp;

            deqAns.push_front(iTemp);
        }

        else if(iInput == 2)
        {
            int iTemp;
            cin >> iTemp;

            deqAns.push_back(iTemp);
        }

        else if(iInput == 3)
        {
            if(deqAns.empty())
                cout << "-1" << '\n';

            else
            {
                cout << deqAns.front() << '\n';
                deqAns.pop_front();
            }
        }

        else if(iInput == 4)
        {
            if(deqAns.empty())
                cout << "-1" << '\n';

            else
            {
                cout << deqAns.back() << '\n';
                deqAns.pop_back();
            }
        }

        else if(iInput == 5)
            cout << deqAns.size() << '\n';

        else if(iInput == 6)
        {
            if(deqAns.empty())
                cout << "1" << '\n';

            else
                cout << "0" << '\n';
        }

        else if(iInput == 7)
        {
            if(deqAns.empty())
                cout << "-1" << '\n';

            else
                cout << deqAns.front() << '\n';
        }

        else if(iInput == 8)
        {
            if(deqAns.empty())
                cout << "-1" << '\n';

            else
                cout << deqAns.back() << '\n';
        }
    }

    return 0;
}
