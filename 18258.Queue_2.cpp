#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    queue<int> queAns;

    int T;
    cin >> T;


    for(int i = 0; i < T; i++)
    {
        string strTemp;
        int iInput = 0;

        cin >> strTemp;

        if(strTemp == "push")
        {
            cin >> iInput;
            queAns.push(iInput);
        }

        else if(strTemp == "pop")
        {
            if(queAns.empty())
                cout << "-1" << '\n';

            else
            {
                int iTemp = queAns.front();
                cout << iTemp << '\n';
                queAns.pop();
            }
        }

        else if(strTemp == "size")
        {
            int iTemp = queAns.size();
            cout << iTemp << '\n';
        }

        else if(strTemp == "empty")
        {
            if(queAns.empty())
                cout << "1" << '\n';

            else
                cout << "0" << '\n';
        }

        else if(strTemp == "front")
        {
            if(queAns.empty())
                cout << "-1" << '\n';

            else
            {
                int iTemp = queAns.front();
                cout << iTemp << '\n';
            }
        }

        else if(strTemp == "back")
        {
            if(queAns.empty())
                cout << "-1" << '\n';

            else
            {
                int iTemp = queAns.back();
                cout << iTemp << '\n';
            }
        }

    }

    return 0;
}
